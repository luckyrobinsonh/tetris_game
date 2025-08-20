 /* Number of cells in tetris*/
#define TETRIS 4

/* Number of tetrominos*/
#define NUM_TETROMINOS 7

/* Orientation of tetrominos*/
#define NUM_ORIENTATION  4

/* Grid length */
#define GRID_COL    10

/* Grid width */
#define GRID_ROW     20


typedef struct{
    int row;
    int col;
} tetris_location;

/* Information about piece of a tetromino */
typedef struct 
{
    /* data */
    int typ;
    int orientation;
    tetris_location loc;
}pieces;



void init_grid(int grid_array[GRID_ROW][GRID_COL]);
void display_grid(int grid_array[GRID_ROW][GRID_COL]);
void init_piece(pieces gestion_piece);