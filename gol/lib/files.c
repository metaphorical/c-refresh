#include <stdio.h>
#include <files.h>

void save_world_to_disc(const char* filename, int world[ROWS][COLS]) {
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Failed to open the file for writing.\n");
        return;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            fprintf(fp, "%d ", world[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}