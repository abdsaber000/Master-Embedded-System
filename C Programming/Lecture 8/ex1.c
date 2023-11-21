
/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to demonstrate how pointers work
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int m = 29;

	printf("Address of m is 0x%x\n" , &m);
	printf("Value of m is %d\n" , m);

	int * ab = &m;

	printf("Now ab is  assigned the address of m.\n");

	printf("Address of pointer ab is 0x%x\n" , ab);
	printf("Value of pointer ab is %d\n" , *ab);

	m = 34;

	printf("The value of m is assigned to 34 now. \n");

	printf("Address of pointer ab is 0x%x\n" , ab);
	printf("Value of pointer ab is %d\n" , *ab);

	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");

	printf("Address of m is 0x%x\n" , &m);
	printf("Value of m is %d\n" , m);
}

