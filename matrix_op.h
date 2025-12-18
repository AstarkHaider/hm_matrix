#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
//function declare
//ts
/* Basic operations */
void matrix_add(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void matrix_sub(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void matrix_elem_mul(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);

/* Linear operations */
void matrix_mul(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void matrix_transpose(double A[SIZE][SIZE], double R[SIZE][SIZE]);

/* Advanced operations */
double matrix_det(double A[SIZE][SIZE]);
void matrix_adjoint(double A[SIZE][SIZE], double R[SIZE][SIZE]);
int matrix_inverse(double A[SIZE][SIZE], double R[SIZE][SIZE]); // 回傳 0 表示不可逆


#endif