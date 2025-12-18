#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3

/* Basic Operations */
void mat_add(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void mat_sub(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void mat_elem_mul(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);

/* Linear Operations */
void mat_mul(double A[SIZE][SIZE], double B[SIZE][SIZE], double R[SIZE][SIZE]);
void mat_transpose(double A[SIZE][SIZE], double R[SIZE][SIZE]);

/* Advanced Operations */
double mat_det(double A[SIZE][SIZE]);
void mat_adjoint(double A[SIZE][SIZE], double R[SIZE][SIZE]);
int mat_inverse(double A[SIZE][SIZE], double R[SIZE][SIZE]); // 成功回傳 1，失敗回傳 0

#endif
