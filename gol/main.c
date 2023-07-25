#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

int world[ROWS][COLS] = {
    {0,0,1,0,1},
    {0,0,1,0,1},
    {1,0,1,0,1},
    {0,1,0,1,0},
    {0,0,0,0,0}
};

int print_world(int world_state[ROWS][COLS]) {
    printf("\n");
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("| %d |", world_state[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int count_neighbours(int world_state[ROWS][COLS], int position[2]) {
    // 0-row, 1-column

}

int is_neighbor(int world_state[ROWS][COLS], int row, int column) {
    /*if position exists (no coordinate is smaller then 0) then we want to return the value,
     if out of bounds - it is 0.
     
     the other function will just be adding these up, so we can stick with 1/0
    */
    if (row>=0 && column>=0)
    {
        return world_state[row][column];
    } else {
        return 0;
    }
    
}

int neighbour_count(int world_state[ROWS][COLS], int row, int column) {
    /*
        |X||X||X|
        |X||O||X|
        |X||X||X|

        we count how many X positions are of value 1
    */

    return is_neighbor(world_state, row-1, column-1) + is_neighbor(world_state, row-1, column) + is_neighbor(world_state, row-1, column+1)
           + is_neighbor(world_state, row, column-1) + is_neighbor(world_state, row, column+1)
           + is_neighbor(world_state, row+1, column-1) + is_neighbor(world_state, row+1, column) + is_neighbor(world_state, row+1, column+1);

}

int world_neighbor_counts(int world_state[ROWS][COLS]) {
    int n_counts[ROWS][COLS] = {0};
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            n_counts[i][j] = neighbour_count(world_state, i, j);
        }
    }
    
    return n_counts;
}

int main() {
    print_world(world);
    printf("\n\n");
    print_world(world_neighbor_counts(world));

    return 0;
}