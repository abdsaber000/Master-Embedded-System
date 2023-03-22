/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   : 
 Description : Program that takes n numbers from the user and calculate the average
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int n;

	printf("Enter the number of data : ");

	fflush(stdout); fflush(stdin);

	scanf("%d" , &n);

	float nums[100];

	int i;

	for(i = 0; i < n; i++){

		printf("%d. Enter number : ", i + 1);

		fflush(stdout); fflush(stdin);

		scanf("%f" , &nums[i]);
	}

	float sum = 0;

	for(i = 0; i < n; i++){
		sum += nums[i];
	}

	float average = sum / n;

	printf("Average = %f", average );

	return 0;
}
