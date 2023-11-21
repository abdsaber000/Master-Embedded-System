
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

	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char * p = arr;
	for(; *p; p++){
		printf("%c " , *p);
	}

}

