
/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Prime numbers between two Intervals by making user defined function
 ============================================================================
 */

#include <stdio.h>

void primes_in_range(int left , int right);
int is_prime(int n);

int main(void) {

	int left,  right;

	printf("Enter two numbers (Intervals) : ");

	fflush(stdout); fflush(stdin);

	scanf("%d %d" , &left , &right);

	primes_in_range(left, right);
	return 0;
}

void primes_in_range(int left, int right){
	int i;
	for(i = left; i <= right; i++){
		if(is_prime(i)){
			printf("%d " , i);
		}
	}
	printf("\n");
}

int is_prime(int n){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;

	int i;

	for(i = 3; i * i <= n; i += 2){
		if(n % i == 0) return 0;
	}

	return 1;
}
