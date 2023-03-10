/*
 ============================================================================
 Name        : ex7.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int number;

	while(1){

		printf("Enter a number: ");

		fflush(stdin); fflush(stdout);

		scanf("%d" , &number);

		if(number >= 0) break;

		printf("Error!!! Factorial of negative numbers doesn't exits!\n");

		fflush(stdout);
	}

	long long factorial = 1;
	for(int i = 1; i <= number; i++){

		factorial *= i;

	}

	printf("Factorial = %lld\n" , factorial );
}
