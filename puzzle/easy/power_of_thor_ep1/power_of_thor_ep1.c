#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int light_x;
    int light_y;
    int initial_tx;
    int initial_ty;

    int *actual_tx = &initial_tx;
    int *actual_ty = &initial_ty;

    char *dirX = "";
    char *dirY = "";

    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);

    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        if(*actual_ty < light_y){
            dirY = "S";
            ++*actual_ty;
        }

        else if (*actual_ty > light_y){
            dirY = "N";
            --*actual_ty;
        }

        else{dirY="";}
        
        if(*actual_tx < light_x){
            dirX = "E";
            ++*actual_tx;
        }

        else if (*actual_tx > light_x){
            dirX = "W";
            --*actual_tx;
        }

        else{dirX="";}

        printf("%s%s\n",dirY,  dirX);

    }

    return 0;
}