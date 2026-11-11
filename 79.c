#include <stdio.h>
void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
    for (int line = 0; line < (rows + cols - 1); line++) {
        int r = (line < rows) ? line : rows - 1;
        int c = (line < rows) ? 0 : line - rows + 1;
        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
        printf("\n");
    }
}
int main() {
    int rows = 3, cols = 4;
    int matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    printf("Diagonal Traversal:\n");
    diagonalTraversal(rows, cols, matrix);
    return 0;
}

