/*
 ============================================================================
 Name        : ex1.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to store information (name, roll, marks) of student using structure
 ============================================================================
 */

#include <stdio.h>

struct Sstudent{
	char name[20];

	int roll_number;

	float marks;
};

void display_info(struct Sstudent student);

int main(void) {

	printf("Enter information of students : \n");

	struct Sstudent student;

	printf("Enter name : ");

	fflush(stdin); fflush(stdout);

	gets(student.name);

	printf("Enter roll number : ");

	fflush(stdin); fflush(stdout);

	scanf("%d" , &student.roll_number);

	printf("Enter marks : ");

	scanf("%f" , &student.marks);

	fflush(stdin); fflush(stdout);

	display_info(student);

}


void display_info(struct Sstudent student){
	printf("Displaying information\n");

	printf("name : %s\n" , student.name);

	printf("roll : %d\n" , student.roll_number);

	printf("marks : %f\n" , student.marks);


}
