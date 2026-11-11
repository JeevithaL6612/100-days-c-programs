#include <stdio.h>
void multiplyMatrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main() {
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    int result[r1][c2];
    multiplyMatrices(r1, c1, A, r2, c2, B, result);
    printf("Resultant Matrix (%dx%d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

