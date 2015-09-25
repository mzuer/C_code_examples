/*
 * dessiner un bonhomme:rond,triangle(triangle=base+intersect)
 */

#include <stdio.h>
void draw_circle(void);
void draw_triangle(void);
void draw_base(void);
void draw_intersect(void);

int main (void){
    draw_circle();
    draw_triangle();
    draw_intersect();
return 0;
}

void draw_circle(void){
    printf("     *     \n");
    printf("  *     *  \n");
    printf("    * *    \n");
}

void draw_triangle(void){
    draw_intersect();
    draw_base();
}

void draw_base(void){
    printf("--------------\n");
}

void draw_intersect(void){
    printf("  / \\    \n");
    printf(" /   \\   \n");
    printf("/     \\  \n");
}
