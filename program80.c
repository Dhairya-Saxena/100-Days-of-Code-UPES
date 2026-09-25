// Q80: Multiply two matrices.
#include <stdio.h>
int main() {
    int a;
    printf("Enter the no. of rows of matrix 1: ");
    scanf("%d", &a);
    int b;
    printf("Enter the no. of columns of matrix 1: ");
    scanf("%d", &b);
    int mat1[a][b];
    printf("Enter the elements of matrix 1: ");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    int x;
    printf("Enter the no. of rows of matrix 2: ");
    scanf("%d", &x);
    int y;
    printf("Enter the no. of columns of matrix 2: ");
    scanf("%d", &y);
    int mat2[x][y];
    printf("Enter the elements of matrix 2: ");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (b != x) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    int result[a][y];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < y; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < b; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Multiplication of two matrices:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d", result[i][j]);
            if (j < y - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
