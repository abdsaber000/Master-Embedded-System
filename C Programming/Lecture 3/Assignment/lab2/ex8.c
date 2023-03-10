/*
 ============================================================================
 Name        : ex8.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to make a simple calculator to add, subtract, multiply, divide using switch
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char operator;

	printf("Enter operator either + or - or * or /: ");

	fflush(stdout); fflush(stdin);

	scanf("%c" , &operator);

	printf("Enter two operands: ");

	fflush(stdout); fflush(stdin);

	float first_number , second_number;

	scanf("%f %f" , &first_number , &second_number);

	switch(operator){
		case '+':
		{
			printf("%f + %f = %f\n" , first_number , second_number , first_number + second_number);
		}
		break;
		case '-':
		{
			printf("%f - %f = %f\n" , first_number , second_number , first_number - second_number);
		}
		break;
		case '*':
		{
			printf("%f * %f = %f\n" , first_number , second_number , first_number * second_number);
		}
		break;
		case '/':
		{
			printf("%f / %f = %f\n" , first_number , second_number , first_number / second_number);
		}
		break;
		default:
		{
			printf("Error!!! wrong operation!\n");
		}

	}


}
