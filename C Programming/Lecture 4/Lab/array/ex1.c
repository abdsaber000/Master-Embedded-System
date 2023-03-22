/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to find the sum of two 2 * 2 matrix
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float first_mat[2][2] , second_mat[2][2];

	int i , j;
	printf("Enter the elements of the first matrix: \n");

	fflush(stdout);
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter a%d%d : " , i , j);

			fflush(stdin); fflush(stdout);

			scanf("%f" , &first_mat[i][j]);
		}
	}


	printf("Enter the elements of the second matrix: \n");

	fflush(stdout);
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter a%d%d : " , i , j);

			fflush(stdin); fflush(stdout);

			scanf("%f" , &second_mat[i][j]);
		}
	}


	float result_mat[2][2];

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			result_mat[i][j] = first_mat[i][j] + second_mat[i][j];
		}
	}

	printf("Sum of matrix : \n");

	fflush(stdout);

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%f " , result_mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
