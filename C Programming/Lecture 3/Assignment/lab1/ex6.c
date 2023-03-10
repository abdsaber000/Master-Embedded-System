/*
 ============================================================================
 Name        : ex6.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Write Source Code to Swap Two Numbers
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

	float temp = first_number;

	first_number = second_number;

	second_number = temp;

	printf("The value of the first number: %f\n" , first_number);

	printf("The value of the second number: %f\n" , second_number);


}
