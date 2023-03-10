/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to find the maximum of three numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float first_number , second_number , third_number;

	printf("Enter three numbers : ");

	fflush(stdout); fflush(stdin);

	scanf("%f %f %f" , &first_number , &second_number , &third_number);

	printf("Largest number is ");

	fflush(stdout);

	if(first_number >= second_number && first_number >= third_number){

		printf("%f\n" , first_number);

	}else if(second_number >= first_number && second_number >= third_number){

		printf("%f\n" , second_number);

	}else{

		printf("%f\n" , third_number);
	}
}
