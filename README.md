# CodeAlpha_Matrix_Operation

#Task
Develop a C program to perform basic matrix operations using functions and  2D arrays.

Description:

This project is a Matrix Operations program written in C. It allows users to input two matrices and perform the following operations:

* Matrix Addition
* Matrix Multiplication
* Matrix Transpose

The program uses functions to implement each operation, making the code modular and easy to understand.

Features:

* Accepts user-defined matrix dimensions
* Performs matrix addition
* Performs matrix multiplication
* Finds the transpose of a matrix
* Uses separate functions for each operation
* Checks whether matrix operations are valid before performing them

Technologies Used:

* C Programming Language
* GCC Compiler
* Visual Studio Code

Program Workflow:

1. Enter the number of rows and columns for Matrix A.
2. Enter the elements of Matrix A.
3. Enter the number of rows and columns for Matrix B.
4. Enter the elements of Matrix B.
5. The program:

   * Performs matrix addition if both matrices have the same dimensions.
   * Performs matrix multiplication if the number of columns in Matrix A equals the number of rows in Matrix B.
   * Displays the transpose of Matrix A.
6. Results are displayed on the screen.

Functions Used:

1. addMatrix()

Adds two matrices of the same dimensions and displays the result.

2. multiplyMatrix()

Multiplies two compatible matrices and displays the resulting matrix.

transposeMatrix():

Calculates and displays the transpose of Matrix A.

Matrix Operation Conditions

Matrix Addition:

Two matrices can be added only if they have the same number of rows and columns.

Matrix Multiplication:

Two matrices can be multiplied only if:

Number of Columns in Matrix A = Number of Rows in Matrix B

Matrix Transpose:

The transpose of a matrix is obtained by converting rows into columns and columns into rows.

Sample Input:

Enter number of rows and columns in Matrix A: 2 2

Enter elements of Matrix A:
1 2
3 4

Enter number of rows and columns in Matrix B: 2 2

Enter elements of Matrix B:
5 6
7 8

Sample Output:

Matrix Addition:
6 8
10 12

Matrix Multiplication:
19 22
43 50

Transpose of Matrix A:
1 3
2 4

How to Compile and Run:

Compile:
gcc -o codealpha_matrixOperation.exe codealpha_matrixOperation.c

Run:
./codealpha_matrixOperation.exe


For Windows PowerShell:

.\codealpha_matrixOperation.exe

Learning Outcomes:

* Understanding two-dimensional arrays
* Working with matrices in C
* Using functions for modular programming
* Matrix addition and multiplication concepts
* Matrix transpose operation
* Conditional validation of matrix operations

Author:

**Shreya Mangalaram**

CodeAlpha Internship – C Programming
