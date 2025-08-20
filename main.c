#include<stdio.h>
//#include "game.h"
#include "grid.h"
//#include "score.h"
//#include "input.h"

int main(){
    int grid[GRID_ROW][GRID_COL];
    init_grid(grid);
    display_grid(grid);
    printf("Hello world\n");
    return 0;
}
