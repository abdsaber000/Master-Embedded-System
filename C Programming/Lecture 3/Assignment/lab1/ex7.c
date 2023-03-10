/*
 ============================================================================
 Name        : ex7.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float first_number , second_number;

	printf("Enter the first number: ");

	fflush(stdin); fflush(stdout);

	scanf("%f" , &first_number);

	printf("Enter the second number: ");

	fflush(stdin); fflush(stdout);

	scanf("%f" , &second_number);

	first_number += second_number;

	second_number = first_number - second_number;

	first_number = first_number - second_number;

	printf("The value of the first number: %f\n" , first_number);

	printf("The value of the second number: %f\n" , second_number);

}
