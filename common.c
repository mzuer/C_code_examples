#include "common.h"
#include "game.h"

void init_game(struct game_t* game)
{
	//évidemment, joueur 1 joue d'abord
	game->joueur = 1;
	game->victoire = 0;
	int i, j;
	//on rempli toutes les cellules = 0
	for (i = 0; i < DIM_X; i += 1)
	{
		for (j = 0; j < DIM_Y; j += 1)
		{
			game->plateau[i][j] = 0;
		}
	}

	/*
	game->plateau[0][0] = 1;
	game->plateau[0][1] = 1;
	game->plateau[0][2] = 2;
	game->plateau[1][0] = 1;
	game->plateau[1][1] = 1;
	game->plateau[1][2] = 1;
	game->plateau[1][3] = 2;
	game->plateau[2][0] = 1;
	game->plateau[2][1] = 2;
	game->plateau[3][0] = 2;
	game->plateau[3][1] = 2;
	game->plateau[4][0] = 1;
	*/

}

void init_ui(struct game_t* game)
{
	//creation d'une nouvelle fenêtre
	GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);
	
	//définition de la fonction à appeler dans le cas de "expose-event" : on_expose_event
	g_signal_connect(window, "expose-event", G_CALLBACK(on_expose_event), game);
	//définition de la fonction à appeler dans le cas de "destroy" : gtk_main_quit (fonction générique de GTK+)
	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	//définition de la fonction à appeler dans le cas de "button_press_event" : clicked
	g_signal_connect(window, "button-press-event", G_CALLBACK(clicked), game);
	
	//la fenêtre est centrée et le titre est "Puissance-4"
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(window), "Puissance-4");

	//la couleur du fond est noire (red=0, green=0, blue=0)
	GdkColor color;
	color.red = 0x0000;
	color.blue = 0x0000;
	color.green = 0x0000;
	gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);
	
	//définition de la taille de la fenêtre
	gtk_window_set_default_size(GTK_WINDOW(window), TAILLE_X, TAILLE_Y);
	gtk_widget_set_app_paintable(window, TRUE);

	gtk_widget_show_all(window);
}

static gboolean on_expose_event(GtkWidget* widget, GdkEventExpose* event, gpointer data)
{
	struct game_t* game = data;
	cairo_t* cr = gdk_cairo_create(widget->window);
	//on dessine de nouveau la table et les jetons
	draw_board(cr, 0, 0, TAILLE_X, TAILLE_Y, TAILLE_CELL);
	draw_game(game, cr, 0, 0, TAILLE_X, TAILLE_Y, TAILLE_CELL);
}

void draw_board(cairo_t* cr,int x, int y, int w, int h, int r)
{
	//couleur = blanc (red=1, green=1, blue=1)
	cairo_set_source_rgb(cr,1,1,1);
	cairo_set_line_width(cr,2.0);
	int i;
	//on dessine toutes les lignes de la table de jeu
	for (i = 0; i <= DIM_X; i += 1)
	{
		cairo_move_to(cr,x + i * r,y);
		cairo_line_to(cr, x + i * r, y + h);
		cairo_move_to(cr, x, y  + i * r);
		cairo_line_to(cr, x + w, y + i * r);
	}
	cairo_stroke(cr);
}

void draw_game(struct game_t* game, cairo_t* cr,int x, int y, int w, int h,int r)
{
	int i, j;
	for (i = 0; i < DIM_X; i += 1)
	{
		for (j = 0; j < DIM_Y; j += 1)
		{
			//si la cellule n'est pas vide
			if (game->plateau[i][j] != 0)
			{
				//si le jeton appartient au joueur 1
				if(game->plateau[i][j] == 1)
				{
					//couleur = rouge (red=1, green=0, blue=0)
					cairo_set_source_rgb(cr,1,0,0);
				}//sinon (il appartient au joueur 2)
				else
				{
					//couleur = jaune (red=1, green=1, blue=0)
					cairo_set_source_rgb(cr,1,1,0);
				}
				//dessine un circle dans la cellule correpondante
				cairo_arc(cr, x+ r/2 + r*i, y + r/2 + TAILLE_Y - TAILLE_CELL - r*j, r/2-5, 0, 2*M_PI);
				cairo_fill(cr);
			}
		}
	}
}


int heuristic(struct game_t* game) {
	int i, j, score_jeu[2], opp_color;
	int (*d)[DIM_Y]; 
	d = game->plateau;
	score_jeu[0] = 0;
	score_jeu[1] = 0;

	// contrôle des barres horizontales (de gauche à droite)
	for (i=0; i<(DIM_X-3); i++) {
		for (j=0; j<DIM_Y; j++) {
			if (d[i][j]!=0) {
				opp_color = 3 - d[i][j];
				if (opp_color!=d[i+1][j] && opp_color!=d[i+2][j] && opp_color!=d[i+3][j]) {
					//printf("add ligne at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j]-1]++;
				}
			}
		}
	}
	// contrôle des barres horizontales (de droite à gauche)
	for (i=3; i<DIM_X; i++) {
		for (j=0; j<DIM_Y; j++) {
			if (d[i][j]!=0) {
				opp_color = 3 - d[i][j];
				if (opp_color!=d[i-1][j] && opp_color!=d[i-2][j] && opp_color!=d[i-3][j]) {
					//printf("add ligne at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j]-1]++;
				}
			}
		}
	}
	// contrôle des barres verticales
	for (i=0; i<DIM_X; i++) {
		for (j=0; j<(DIM_Y-3); j++) {
			if (d[i][j]!=0) {
				opp_color = 3 - d[i][j];
				if (opp_color!=d[i][j+1] && opp_color!=d[i][j+2] && opp_color!=d[i][j+3]) {
					//printf("add col at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j]-1]++;
				}
			}
		}
	}
	// contrôle des diagonales qui vont de gauche à droite
	for (i=0;i<(DIM_X-3);i++) {
		for (j=0;j<(DIM_Y-3);j++) {
			// diagonale montante
			if(d[i][j]!=0) {
				opp_color = 3 - d[i][j];
				if(opp_color!=d[i+1][j+1] && opp_color!=d[i+2][j+2] && opp_color!=d[i+3][j+3]) {
					//printf("add diag1 at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j]-1]++;
				}
			}

			// diagonale descendante
			if(d[i][j+3]!=0) {//TODO: check the case where 3,2 is yellow and diag2 is open (all empty), this one is not taken into account
				opp_color = 3 - d[i][j+3];
				if(opp_color!=d[i+1][j+2] && opp_color!=d[i+2][j+1] && opp_color!=d[i+3][j]) {
					//printf("add diag2 at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j+3]-1]++;
				}
			}
		}
	}
	// contrôle des diagonales qui vont de droite à gauche
	for (i=3;i<DIM_X;i++) {
		for (j=0;j<(DIM_Y-3);j++) {
			// diagonale montante
			if(d[i][j]!=0) {
				opp_color = 3 - d[i][j];
				if(opp_color!=d[i-1][j+1] && opp_color!=d[i-2][j+2] && opp_color!=d[i-3][j+3]) {
					//printf("add diag1 at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j]-1]++;
				}
			}

			// diagonale descendante
			if(d[i][j+3]!=0) {//TODO: check the case where 3,2 is yellow and diag2 is open (all empty), this one is not taken into account
				opp_color = 3 - d[i][j+3];
				if(opp_color!=d[i-1][j+2] && opp_color!=d[i-2][j+1] && opp_color!=d[i-3][j]) {
					//printf("add diag2 at %d %d for joueur %d\n", i, j, d[i][j]);
					score_jeu[d[i][j+3]-1]++;
				}
			}
		}
	}
	//printf("heuristic: score joueur 1=%d, score joueur2=%d\n", score_jeu[0], score_jeu[1]);
	return score_jeu[0]-score_jeu[1];
}

int plateau_plein(struct game_t* game) {
	int i;
	for (i=0;i<DIM_X;i++) {
		if (game->plateau[i][DIM_Y-1]==0) {
			return 0;
		}
	}
	return 1;
}

int find_best_move(struct game_t* game, int who, int* col, int level, int* nb_evaluations) {
	int i, j, w, s, best_s, col_joue;

	/* Nous vérifions d'abord si ce plateau a un gagnant */
	w = status_game(game);

	//printf("find_best_move: status game %d\n", w);
	if (w != 0) {
		// Il y a un gagnant. Le score est +1000 si il s'agit de l'humain, -1000 si il s'agit de l'ordinateur
		(*nb_evaluations)++;
		//printf("find_best_move: %d wins!\n", w);
		return MAX_SCORE * (w==1?1:-1);
	}

	if (plateau_plein(game)) {
		/*  Il n'y a pas de gagnant, et le tableau est plein. C'est un match nul.
		Le score est donc de 0. */
		(*nb_evaluations)++;
		//printf("find_best_move: plateau is full\n");
		return 0;
	}

	if (level == 0) {
		/* Nous sommes arrivés au niveau maximal d'exploration de l'arbre. Il faut remonter
		 l'information (même si le tableau n'est pas plein encore). */
		(*nb_evaluations)++;
		return heuristic(game);
	}

	/* Nous allons simuler les mouvements possibles. best_s est prépositionné au pire
	   score possible du point de vue du joueur courant. Dans le cas de l'humain, tout
	   mouvement ne faisant pas gagner l'ordinateur sera meilleur (plus grand que -1000)
	   tandis que dans le cas de l'ordinateur, c'est l'inverse (plus petit que +1000) */
	best_s = MEGA_SCORE * (who==2?1:-1);
	for (i = 0; i < DIM_X; i++) {
		col_joue = first_empty(game, i);
		if (col_joue != -1) {
			/* Cette case est vide. On joue le coup et on continue plus bas dans l'arbre */
			//printf("find_best_move: %d try play %d %d\n", who, i, col_joue);
			game->plateau[i][col_joue] = who;
			
			/* On explore l'arbre (en profondeur d'abord). Le prochain coup est à
			 l'adversaire : on indique donc -who pour le paramètre correspondant (e.g., si l'humain
			 a joué le coup actuel, -(+1) donne -1, l'ordinateur). Le niveau est diminué d'une
			 unité : on a exploré un niveau supplémentaire. Notons les pointeurs vides ici : il n'est
			 pas nécessaire de sauver les meilleurs mouvements dans l'arbre, seul le meilleur mouvement
			 de plus haut niveau nous intéresse. */
			s = find_best_move(game, (3-who), NULL, (level-1), nb_evaluations);
			//printf("find_best_move: s[%d] = %d\n", i, s);
			/* L'évaluation (evt. récursive) du mouvement est terminée. Vérifions si il est
			 un meilleur mouvement que ceux que nous avions jusqu'ici. Pour cela, appliquons
			 la règle max (quand c'est le joueur humain) ou min (quand c'est l'ordinateur)*/
		  	if ((who == 1 && s > best_s) || (who == 2 && s < best_s)) {
				/* c'est le cas! on met à jour le meilleur mouvement et le meilleur score */
				best_s = s;
				//printf("find_best_move: lvl=%d best s = %d\n", level, best_s);
				if (col != NULL) {
					*col = i;
					//printf("find_best_move: replace col %d\n", i);
				}
			}
			/* On annule le mouvement avant de tester le prochain */
			game->plateau[i][col_joue] = 0;
		}
	}
	/* On retourne le résultat de la fonction d'évaluation */
	return best_s;
}


