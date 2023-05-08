/*
 ============================================================================
 Name        : ex5.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to find the area of a circle using by passing parameters to macros
 ============================================================================
 */

#include <stdio.h>

#define PI 3.14

#define Area(n) n*n*3.14


int main(void) {

	float radius;
	scanf("%f" , &radius);

	printf("The Area = %f\n" , Area(radius));
}

