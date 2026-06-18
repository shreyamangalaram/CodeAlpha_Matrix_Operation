#include <stdio.h>

void addMatrix(int r, int c, int A[r][c], int B[r][c]);
void multiplyMatrix(int r1, int c1, int A[r1][c1],
                    int r2, int c2, int B[r2][c2]);
void transposeMatrix(int r, int c, int A[r][c]);

int main()
{
    int r1, c1, r2, c2;

    printf("Enter number of rows and columns in Matrix A: ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter number of rows and columns in Matrix B: ");
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Matrix Addition
    if(r1 == r2 && c1 == c2)
        addMatrix(r1, c1, A, B);
    else
        printf("\nMatrix Addition not possible.\n");

    // Matrix Multiplication
    if(c1 == r2)
        multiplyMatrix(r1, c1, A, r2, c2, B);
    else
        printf("\nMatrix Multiplication not possible.\n");

    // Transpose of Matrix A
    transposeMatrix(r1, c1, A);

    return 0;
}

void addMatrix(int r, int c, int A[r][c], int B[r][c])
{
    int sum[r][c];

    printf("\nMatrix Addition:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int r1, int c1, int A[r1][c1],
                    int r2, int c2, int B[r2][c2])
{
    int result[r1][c2];

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\nMatrix Multiplication:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}

void transposeMatrix(int r, int c, int A[r][c])
{
    printf("\nTranspose of Matrix A:\n");

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
            printf("%d ", A[j][i]);
        printf("\n");
    }
}
