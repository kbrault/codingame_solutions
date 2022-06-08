#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    while (1) {
        int max = 0;
        int max_m = 0;
        for (int i = 0; i < 8; i++) {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &mountain_h);
            if(max < mountain_h){
                max = mountain_h;
                max_m = i;
            }
        }
        printf("%d\n", max_m); // The index of the mountain to fire on.
    }

    return 0;
}