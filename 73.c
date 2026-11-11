#include <stdio.h>
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int row_sums[ROWS] = {0}; 
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            row_sums[i] += matrix[i][j];
        }
    }
    printf("Row sums stored in the array:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Sum of row %d = %d\n", i + 1, row_sums[i]);
    }

    return 0;
}

