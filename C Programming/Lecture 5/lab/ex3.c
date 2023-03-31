
/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to reverse a sentence using recursion
 ============================================================================
 */

#include <stdio.h>
#include "string.h"

void reverse_sentence(int index , char sentence[]);

int main(void) {

	char sentence[100];

	printf("Enter a sentence : ");

	fflush(stdin); fflush(stdout);

	gets(sentence);

	reverse_sentence(0 , sentence);
	return 0;
}

void reverse_sentence(int index ,char sentence[]){
	if(index == strlen(sentence)){
		return;
	}

	reverse_sentence(index + 1, sentence);

	printf("%c" , sentence[index]);
}

