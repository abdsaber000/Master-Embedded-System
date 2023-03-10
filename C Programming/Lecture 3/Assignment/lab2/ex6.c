/*
 ============================================================================
 Name        : ex6.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to compute the sum of the first n natural numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int n;

	printf("Enter an integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &n);

	int sum = n * (n + 1) / 2;

	printf("Sum = %d\n" , sum);
}
