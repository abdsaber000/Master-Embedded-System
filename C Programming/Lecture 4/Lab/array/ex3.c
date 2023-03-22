/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program that finds the transpose of a matrix
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	printf("Enter the rows and columns of the matrix : ");

	fflush(stdin); fflush(stdout);

	int row , col;

	scanf("%d %d" , &row , &col);

	float mat[100][100];

	int i , j;

	printf("Enter the elements of matrix : \n");

	fflush(stdout);


	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("Enter the elements a%d%d" , i + 1, j + 1);

			fflush(stdout); fflush(stdin);

			scanf("%f" , & mat[i][j]);
		}
	}

	printf("Entered Matrix : \n");

	fflush(stdout);

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%f " , mat[i][j]);
		}
		printf("\n");
	}

	float trans[100][100];

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			trans[j][i] = mat[i][j];
		}
	}

	printf("Transpose of matrix : \n");

	fflush(stdout);

	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			printf("%f " , trans[i][j]);
		}
		printf("\n");
	}



	return 0;
}
