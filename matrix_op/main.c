#include <stdio.h>
#include "matrix_op.h"

int i,j;
void print(double M[SIZE][SIZE]) {
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%8.2f ", M[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    double A[3][3] = {{1,2,3},{0,1,4},{5,6,0}};
    double B[3][3] = {{7,8,9},{1,2,3},{4,5,6}};
    double R[3][3] = {0};

    mat_add(A, B, R);
    print(R);

    mat_mul(A, B, R);
    print(R);

    if (mat_inverse(A, R))
        print(R);
    else
        printf("Matrix not invertible\n");

    return 0;
}