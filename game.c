#include "common.h"
#include "game.h"

/*
pour compiler :

gcc -o game *.c `pkg-config --libs --cflags gtk+-2.0`

*/

/***
*
* Appelle la fonction qui laisse jouer l'ordinateur
*
*/
void IAPlay(struct game_t *game)
{
    int i, evals;
    find_best_move(game, 2, &i, game->level, &evals);
    printf("\nL'ordinateur joue : (%d) -- nombre d'évaluations = %d\n", i, evals);
    game->plateau[i][first_empty(game, i)] = 2;

    //Test si on a gagne
    if(status_game(game) != 0)
    {
        game->victoire = 2;
        printf("\n\n*** Victoire de l'ordinateur de niveau %d ***\n\n", game->level);
    }
    //C'est au tour de l'adversaire
    else
        game->joueur = 1;

}

/***
*
* retourne la première cellule disponible dans la colonne donnée ou -1 si la colonne est remplie
*
***/
int first_empty(struct game_t *game, int x)
{
	int i;

	//Parcourt les 6 cases de la colonne x
	for (i=0 ; i<DIM_Y ; i++)
		if (game->plateau[x][i]==0)
            return i;

	return -1;
}

/***
*
*   Code permettant de récupérer le clique de l'utilisateur sur le plateau de jeu
*
***/
void handle_click(int px, int py,struct game_t* game){

    if(game->victoire != 0)
        return;

    //Recupère la position y de la piece
    int posPieceY = first_empty(game, px/TAILLE_CELL);

    //Si elle est valide pose la piece dans le jeu
    if(posPieceY != -1)
        game->plateau[px/TAILLE_CELL][posPieceY] = 1;


    //Test si on a gagne
    if(status_game(game) != 0)
    {
        game->victoire = 1;
        printf("\n\n*** BRAVO ! Vous avez gagne contre une IA de niveau %d ***\n\n", game->level);
    }
    //C'est au tour de l'adversaire
    else
    {
        game->joueur = 2;
        IAPlay(game);
    }


	return;
}

//fonction appellée quand l'utilisateur appuie sur un bouton de la souris
gboolean clicked(GtkWidget* widget, GdkEventButton* event, gpointer user_data)
{
	//prend le pointeur de la structure "game" à partir de "user_data"
	struct game_t* game = user_data;
	if(event->button == 1 ){
		handle_click(event->x, event->y, game);
	}

	gtk_widget_queue_draw(widget);
	return TRUE;
}

/***
*
* fonction retournant le statut du jeu : 0 si aucun gagnant, 1 si le joueur 1 a gagne et 2 si le joueur 2 a gagne
*
***/

int status_game(struct game_t *game) {

	int i,j, NumJoueur, tmp;

	int incr;

    //Parcourt toutes les cases du tableau
    for(i=0; i<DIM_X; i++)
        for(j=0; j<DIM_Y; j++)
            //test si il y a un jeton sur cette case
            if(game->plateau[i][j] != 0)
            {
                //Recupère le joueur qui a pose le jeton
                NumJoueur = game->plateau[i][j];


                //Test toutes les combinaisons de possibilité
                //en bas ( si le jeton est en dessous de 3 on peut pas en mettre 4... )
                if(j >= 3)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=j, incr=1 ; tmp>j-4; tmp--, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i][tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;

                //en haut ( idem que bas mais en dessus de lui )
                if(j <= 2)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=j, incr=1 ; tmp>j+4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i][tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;

                //A droite (idem que les autres mais a droite.. )
                if(i <= 3)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=i, incr=1 ; tmp>i+4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[tmp][j] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;
                //A gauche (derniere possibilité sur le même principe )
                if(i >= 3)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=i, incr=1 ; tmp>i-4; tmp--, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[tmp][j] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;


                //Diagonale Haut Droite
                if(i <= 3 && j <= 2)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=0, incr=1 ; tmp<4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i+tmp][j+tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;

                //Diagonale haut Gauche
                if(i >= 3 && j <= 2)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=0, incr=1 ; tmp<4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i-tmp][j+tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;

                //diagonale Bas Gauche
                if(i >= 3 && j >= 3)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=0, incr=1 ; tmp<4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i-tmp][j-tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;

                //Diagonale Bas Droite
                if(i <= 3 && j >= 3)
                    //controle les 3 autres cases et initialise incr à 1
                    for(tmp=0, incr=1 ; tmp<4; tmp++, incr++)
                        //Si le combo est cassé => on quitte la boucle
                        if(game->plateau[i+tmp][j-tmp] != NumJoueur)
                            break;
                        else
                            if(incr == 4)
                                return NumJoueur;


            }



	return 0;

}


int main (int argc, char* argv[])
{
	int player_starts;
	//déclaration et initialisation de la structure "game"
	struct game_t game;
	init_game(&game);

	printf("Niveau d'intelligence artificielle desire ? \n");

	///Permet de ne pas faire Crash le jeu
	do
    {
        scanf("%d", &(game.level));
    }
	while(game.level < 0);
	printf("Desirez-vous commencer le match ? (Oui=1, Non=0) \n");

	///Plus propre
	do
    {
       scanf("%d", &player_starts);
    }
	while(player_starts != 1 && player_starts != 0);

	//initialisation de l'environment graphique de GTK+
	gtk_init(&argc, &argv);
	//initialisation de l'interface d'utilisateur
	init_ui(&game);

	//si l'ordi joue d'abord
	if (!player_starts)
		IAPlay(&game);

	//appel au "main" de GTK+
	gtk_main();

	return 0;
}
