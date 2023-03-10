/*
 * ex2.c
 *	EX2:

	Write C Program to Print a Integer Entered by a User

 *  Created on: Mar 10, 2023
 *      Author: Abdulrahman Saber
 */


#include "stdio.h"

int main(){
	int number;

	printf("Enter an integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &number);

	printf("You entered: %d\n" , number);
}


