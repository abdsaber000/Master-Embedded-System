/*
 ============================================================================
 Name        : ex4.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float first_number , second_number;

	printf("Enter two numbers: ");

	fflush(stdin); fflush(stdout);

	scanf("%f %f" , &first_number,  &second_number);

	float product = first_number * second_number;

	printf("Product %f\n" , product);
}
