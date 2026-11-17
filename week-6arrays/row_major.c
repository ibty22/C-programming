#include <stdio.h>
int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("Row-matrix traversal(row by row )\n");
    for (int row =0; row <3; row++) {
        for (int col =0; col <4; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    printf("\n memory addresses (each int takes 4 bytes ):\n");
    for (int row =0; row <3; row++) {
        for (int col =0; col <4; col++) {
            printf("matrix[%d][%d] = %d at address %p\n", 
                   row, col, matrix[row][col], (void*)&matrix[row][col]);
        }
        printf("\n");
    }
    printf("\nobservation:addresses increase row by row \n");
    printf("row 0 is stored in completely , then row 1 , then row 2 .\n");
    return 0;
}
