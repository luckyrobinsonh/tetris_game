#include <stdio.h>
#include "grid.h"


/* Initialisation de la grille */
void init_grid(int grid_array[GRID_ROW][GRID_COL])
{
    for(int i=0;i<GRID_ROW;i++)
    {
        for(int j = 0;j<GRID_COL;j++)
        {
            grid_array[i][j]=0; // 0 représente case vide
        }
    }
}


void display_grid(int grid_array[GRID_ROW][GRID_COL])
{
    for(int i=0;i<GRID_ROW;i++)
    {
        for(int j = 0;j<GRID_COL;j++)
        {
            printf(grid_array[i][j] ? "[]" : ". "); //Display the grid
        }
        printf("\n");
    }
}


/******************************************************
 *              Array definitions
 ******************************************************/

 tetris_location TETROMINOS[NUM_TETROMINOS][NUM_ORIENTATION][TETRIS] = {
    // I Shape
    {{{0,1},{1,1},{2,1},{3,1}}, // Inclinaison 0°
    {{1,0},{1,1},{1,2},{1,3}}, // Inclinaison 90°
    {{0,1},{1,1},{2,1},{3,1}}, // Inclinaison 180°
    {{2,0},{2,1},{2,2},{2,3}}}, // Inclinaison 270°

    // J Shape
    {{{0,1},{0,0},{1,0},{2,0}}, // Inclinaison 0°
    {{0,0},{1,0},{1,1},{1,2}}, // Inclinaison 90°
    {{1,0},{1,1},{1,2},{2,2}}, // Inclinaison 180°
    {{0,1},{1,1},{2,0},{2,1}}}, // Inclinaison 270°

    // L Shape
    {{{0,0}, {1,0}, {2,0}, {2,1}}, // Inclinaison 0°
    {{2,0}, {1,0}, {1,1}, {1,2}},  // Inclinaison 90°
    {{0,0}, {0,1}, {1,1}, {2,1}},  // Inclinaison 180°
    {{2,0}, {2,1}, {2,2}, {1,2}}}, // Inclinaison 270°

    // Square shape
    {{{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 0°
    {{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 90°
    {{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 180°
    {{1,1}, {2,1}, {1,2}, {2,2}}}, // Inclinaison 270°

    // Z Shape
    {{{1,0}, {1,0}, {2,0}, {2,1}}, // Inclinaison 0°
    {{2,0}, {1,0}, {1,1}, {1,2}},  // Inclinaison 90°
    {{0,0}, {0,1}, {1,1}, {2,1}},  // Inclinaison 180°
    {{2,0}, {2,1}, {2,2}, {1,2}}}, // Inclinaison 270°

    // Inverse shape
    {{{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 0°
    {{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 90°
    {{1,1}, {2,1}, {1,2}, {2,2}}, // Inclinaison 180°
    {{1,1}, {2,1}, {1,2}, {2,2}}}, // Inclinaison 270°

 };
