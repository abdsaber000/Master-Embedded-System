/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to find the length of string.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	
    
    char arr[100];
    printf("Enter a string : " );
    
    fflush(stdin); fflush(stdout);
    gets(arr);

    int position = 0;
    while(arr[position] != 0){
        position++;
    }

    printf("Length of string : %d" , position);
    
    


}