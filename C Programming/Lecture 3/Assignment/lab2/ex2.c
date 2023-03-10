/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to check if an alphabet is vowel or consonant
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char alphabet;

	printf("Enter an alphabet: ");

	fflush(stdin); fflush(stdout);

	scanf("%c" , &alphabet);

	switch(alphabet){
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':
		{
			printf("%c is vowel" , alphabet);
		}
		break;
		default:
		{
			printf("%c is consonant" , alphabet);
			break;
		}
	}
}
