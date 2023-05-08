/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to add two complex numbers by passing a structure to a function
 ============================================================================
 */

#include <stdio.h>

struct Scomplex{
	float real;
	float imaginary;
};

void display_info(struct Scomplex number);

struct Scomplex add(struct Scomplex distance1 , struct Scomplex distance2);


int main(void) {

	printf("For 1st complex number \n");

	struct Scomplex number1;

	printf("Enter the real and imaginary part respectively : ");

	fflush(stdin); fflush(stdout);

	scanf("%f %f" , &number1.real , &number1.imaginary);

	
	
	printf("For 2nd complex number \n");

	struct Scomplex number2;

	printf("Enter the real and imaginary part respectively : ");

	fflush(stdin); fflush(stdout);

	scanf("%f %f" , &number2.real , &number2.imaginary);


	struct Scomplex result = add(number1 , number2);

	display_info(result);

}

struct Scomplex add(struct Scomplex distance1 , struct Scomplex distance2){
	struct Scomplex result;
	result.real = distance1.real + distance2.real;
	result.imaginary = distance1.imaginary + distance2.imaginary;

	return result;
}


void display_info(struct Scomplex number){

	printf("Sum = %f + %fi\n" , number.real , number.imaginary);

}
