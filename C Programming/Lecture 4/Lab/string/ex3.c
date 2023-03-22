/*
 ============================================================================
 Name        : ex3.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to reverse a string without using library function.
 ============================================================================
 */

#include <stdio.h>
#include "string.h"

int main(void) {
	
    
    char arr[100];
    printf("Enter a string : " );
    
    fflush(stdin); fflush(stdout);
    gets(arr);

    int n = strlen(arr);

    int left = 0 , right = n - 1;

    while(left < right){
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        right--;
        left++;
    }
    
    printf("Reverse string is : %s" , arr);
    


}