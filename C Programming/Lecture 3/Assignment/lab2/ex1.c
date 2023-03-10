/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int number;

	printf("Enter a number: ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &number);

	if(number % 2)
		printf("%d is Odd\n" , number);
	else
		printf("%d is Even\n" , number);
}
