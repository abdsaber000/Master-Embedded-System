/*
 ============================================================================
 Name        : ex4.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program to insert an element in an array
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int nums[100];

	int n;

	printf("Enter number of elements in array : ");

	fflush(stdout); fflush(stdin);

	scanf("%d" , &n);

	int i;

	for(i = 0; i < n; i++){
		fflush(stdin);

		scanf("%d" , &nums[i]);
	}

	int element , index;

	printf("Enter the element to be inserted : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &element);

	printf("Enter the location : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &index);

	index--;  // to make it zero based

	// shift all elements from this index one step right

	for(i = n - 1; i >= index; i--){
		nums[i + 1] = nums[i];
	}

	nums[index] = element;

	n++; // the number of elements increased after the insertion

	for(i = 0 ; i < n; i++){

		printf("%d " , nums[i]);
	}

	printf("\n");

	return 0;
}
