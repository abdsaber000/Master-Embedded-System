/*
 ============================================================================
 Name        : ex5.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to search an element in array
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int n;

	printf("Enter the number of elements : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &n);

	int nums[100];

	int i;

	for(i = 0; i < n; i++){
		fflush(stdin);
		scanf("%d " , &nums[i]);

	}

	printf("Enter the element to be searched ");

	int element;

	fflush(stdout); fflush(stdin);

	scanf("%d" , &element);

	int index = -1; // assume initially that's not found

	for(i = 0; i < n; i++){
		if(nums[i] == element){
			index = i + 1;
			break;
		}
	}

	if(index == -1){
		printf("not found\n");
	}else{
		printf("number found at location  = %d" , index);
	}

	return 0;
}
