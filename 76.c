#include <stdio.h>
int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    int is_symmetric = 1; 
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;            
                }
        }
        if (!is_symmetric) {
            break; 
        }
    }
    if (is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}

