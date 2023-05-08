/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to add two distances in (inch-feet) system using structure
 ============================================================================
 */

#include <stdio.h>

struct Sdistance{
	int feet;
	float inch;
};

void display_info(struct Sdistance distance);

struct Sdistance add(struct Sdistance distance1 , struct Sdistance distance2);


int main(void) {

	printf("Enter information of first distance : \n");

	struct Sdistance distance1;

	printf("Enter feet : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &distance1.feet);

	printf("Enter inch : ");

	fflush(stdin); fflush(stdout);

	scanf("%f" , &distance1.inch);
	
	printf("Enter information of second distance : \n");

	struct Sdistance distance2;
	
	printf("Enter feet : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &distance2.feet);

	printf("Enter inch : ");

	fflush(stdin); fflush(stdout);

	scanf("%f" , &distance2.inch);

	struct Sdistance result = add(distance1 , distance2);

	display_info(result);

}

struct Sdistance add(struct Sdistance distance1 , struct Sdistance distance2){
	struct Sdistance result;
	result.feet = distance1.feet + distance2.feet;
	result.inch = distance1.inch + distance2.inch;

	if(result.inch > 12){
		result.inch -= 12;
		result.feet++;
	}
	return result;
}


void display_info(struct Sdistance student){

	printf("Sum of distances = %d'-%f''\n" , student.feet , student.inch);

}
