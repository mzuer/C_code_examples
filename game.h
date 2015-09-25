#ifndef	_PROJET_GAME_H
#define	_PROJET_GAME_H 1
#include <cairo.h>
#include <gtk/gtk.h>
#include <math.h>




/************Debut Declarations**************/
//initialise la variable de type struct game_t
void init_game(struct game_t *game);
//initialise l'interface graphique
void init_ui(struct game_t* game);
//dessine la table de jeu
void draw_board(cairo_t* cr,int x, int y, int w, int h, int r);
//dessine les jetons sur la table de jeu
void draw_game(struct game_t* game, cairo_t* cr,int x, int y, int w, int h,int r);

//fonction appellée quand l'utilisateur appuie sur un bouton de la souris
gboolean clicked(GtkWidget* widget, GdkEventButton* event, gpointer user_data);
//fonction appellée quand la fenêtre doit être redessinée
static gboolean on_expose_event(GtkWidget* widget, GdkEventExpose* event, gpointer data);

//retourne la première cellule disponible dans la colonne donnée ou -1 si la colonne est remplie
int first_empty(struct game_t *game, int x);

//retourne l'id du joueur gagnant ou 0 si il n'y a pas (pour le moment) de vainqueur
int status_game(struct game_t *game);

//int heuristic(struct game_t* game);

int plateau_plein(struct game_t* game);


#endif /* projet/game.h */
