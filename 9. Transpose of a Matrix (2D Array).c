#include <stdio.h>
#define R 3
#define C 2

void transpose(int mat[][C], int trans[][R]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int a[R][C] = {{1, 2}, {3, 4}, {5, 6}};
    int b[C][R]; // Note the swapped dimensions
    
    transpose(a, b);
    
    printf("Transposed Matrix:\n");
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}