/*
 ============================================================================
 Name        : ex5.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char character;

	printf("Enter a character: ");

	fflush(stdin); fflush(stdout);

	scanf("%c" , &character);

	printf("ASCII value of %c = %d" , character , (int)character);
}
