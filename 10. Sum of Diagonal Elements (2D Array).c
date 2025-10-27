#include <stdio.h>
#define N 3

int sumDiagonal(int mat[][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += mat[i][i]; // i==j for main diagonal
    }
    return sum;
}

int main() {
    int mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Sum of diagonal elements: %d\n", sumDiagonal(mat));
    return 0;
}