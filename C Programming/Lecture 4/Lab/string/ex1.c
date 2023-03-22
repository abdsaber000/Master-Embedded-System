/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to find the frequancy of a character in string.
 ============================================================================
 */

#include <stdio.h>
#include "string.h"

int main(void) {
	
    char word[1000];
    printf("Enter a string : ");

    fflush(stdin); fflush(stdout);

    gets(word);

    int fre[26] = {0};

    int i;

    int word_size = strlen(word);

    for(i = 0; i < word_size; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            fre[word[i] - 'a']++;
        }
    }

    printf("Enter a character to find  frequency : ");

    fflush(stdin); fflush(stdout);

    char character;

    scanf("%c" , &character);

    int frequancy = fre[character - 'a'];

    printf("frequancy of %c is %d\n", character , frequancy);
    
    


}