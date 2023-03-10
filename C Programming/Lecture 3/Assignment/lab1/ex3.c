/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int first_number , second_number;

	printf("Enter two integers: ");

	fflush(stdout); fflush(stdin);

	scanf("%d %d" , &first_number , &second_number);

	int sum = first_number + second_number;

	printf("Sum = %d" , sum);
}
