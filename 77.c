#include <stdio.h>
#include <stdbool.h>
bool areDiagonalElementsDistinct(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; 
                }
        }
    }
    return true; 
}

int main() {
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    if (areDiagonalElementsDistinct(n, matrix)) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are NOT distinct.\n");
    }

    return 0;
}

