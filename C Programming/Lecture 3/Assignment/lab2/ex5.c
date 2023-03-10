/*
 ============================================================================
 Name        : ex5.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to check whether a character is alphabet or not
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char character;

	printf("Enter a character: ");

	fflush(stdout); fflush(stdin);

	scanf("%c" , &character);

	if((character >= 'a' && character <= 'z')
			|| (character >= 'A' && character <= 'Z')){

		printf("%c is an alphabet\n" , character);

	}else{

		printf("%c is not an alphabet\n" , character);

	}
}
