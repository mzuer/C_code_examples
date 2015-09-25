#ifndef	_COMMON_H

#include <cairo.h>
#include <gtk/gtk.h>

#define DIM_X 7
#define DIM_Y 6
#define TAILLE_CELL 50
#define MAX_SCORE 10000
#define MEGA_SCORE 10 * MAX_SCORE
#define START_ALPHA -MEGA_SCORE
#define START_BETA MEGA_SCORE
#define TAILLE_X DIM_X * TAILLE_CELL
#define TAILLE_Y DIM_Y * TAILLE_CELL

struct game_t
{
	//dans plateau on met ce qui les cellules contiennent :
	//0 si elle est vide
	//1 s'il y a un jeton du joueur 1
	//2 s'il y a un jeton du joueur 2
	int plateau[DIM_X][DIM_Y];
	//joueur a qui appartient le tour actuellement (1 pour joueur 1 ; 2 pour joueur 2)
	int joueur;
	int victoire;
	int level;
};

void init_game(struct game_t* game);
void init_ui(struct game_t* game);
static gboolean on_expose_event(GtkWidget* widget, GdkEventExpose* event, gpointer data);
void draw_board(cairo_t* cr,int x, int y, int w, int h, int r);
void draw_game(struct game_t* game, cairo_t* cr,int x, int y, int w, int h,int r);
int heuristic(struct game_t* game) ;
int find_best_move(struct game_t* game, int who, int* col, int level, int* nb_evaluations);

#endif
