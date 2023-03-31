
/*
 ============================================================================
 Name        : ex4.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to calculate the power of a number using recursion
 ============================================================================
 */

#include <stdio.h>

long long power(long long base , long long exp);

int main(void) {

	printf("Enter a base number : ");

	fflush(stdout); fflush(stdin);

	long long base;

	scanf("%lld" , &base);

	long long exp;

	printf("Enter power number (positive number): ");

	fflush(stdout); fflush(stdin);

	scanf("%lld" , &exp);

	long long result = power(base, exp);

	printf("%lld ^ %lld = %lld" , base,  exp , result);

	return 0;
}

long long power(long long base , long long exp){
	if(exp == 0) return 1;

	return base * power(base , exp - 1);
}

