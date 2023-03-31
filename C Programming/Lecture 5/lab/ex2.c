
/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to calculate the factorial of a number using recursion
 ============================================================================
 */

#include <stdio.h>


long long factorial(long long n);

int main(void) {

	printf("Enter a positive integer : ");

	fflush(stdin); fflush(stdout);

	long long n;

	scanf("%lld" , &n);

	long long result = factorial(n);

	printf("Factorial of %lld = %lld" , n , result);
	return 0;
}

long long factorial(long long n){
	if(n <= 1) return 1;

	return n * factorial(n - 1);
}
