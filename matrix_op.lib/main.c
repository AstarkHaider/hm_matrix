#include <stdio.h>
#include "matrix_op.h"

int i,j;
void print(const char *title, double M[SIZE][SIZE]) {
    printf("=== %s ===\n", title);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%8.2f ", M[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    double A[SIZE][SIZE] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    double B[SIZE][SIZE] = {
        {7, 8, 9},
        {1, 2, 3},
        {4, 5, 6}
    };

    double R[SIZE][SIZE];

    /* Basic Operations */
    mat_add(A, B, R);
    print("A + B", R);

    mat_sub(A, B, R);
    print("A - B", R);

    mat_elem_mul(A, B, R);
    print("A ∘ B (Element-wise)", R);

    /* Linear Operations */
    mat_mul(A, B, R);
    print("A * B (Matrix Multiplication)", R);

    mat_transpose(A, R);
    print("Transpose of A", R);

    /* Advanced Operations */
    double det = mat_det(A);
    printf("=== Determinant of A ===\n");
    printf("det(A) = %.2f\n\n", det);

    double adj[SIZE][SIZE];
    mat_adjoint(A, adj);
    print("Adjoint of A", adj);

    if (mat_inverse(A, R))
        print("Inverse of A", R);
    else
        printf("Matrix A is not invertible\n");

    return 0;
}
