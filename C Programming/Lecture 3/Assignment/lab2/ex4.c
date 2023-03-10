/*
 ============================================================================
 Name        : ex4.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to check if a number is positive or negative
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float number;

	printf("Enter a number: ");

	fflush(stdout); fflush(stdin);

	scanf("%f" , &number);

	if(number > 0)

		printf("%f is positive number.\n" , number);

	else if(number < 0)

		printf("%f is negative number.\n" , number);

	else

		printf("%f is zero.\n" , number);

}
