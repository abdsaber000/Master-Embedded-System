/*
 ============================================================================
 Name        : ex4.c
 Author      : Abdulrahman Saber
 Version     :
 Copyright   :
 Description : Program to store information (name, roll, marks) of 10 students using structure
 ============================================================================
 */

#include <stdio.h>

struct Sstudent{
	char name[20];

	int roll_number;

	float marks;
};

void display_info(struct Sstudent student[] , int n);

void read_info(struct Sstudent student[] , int n);

int main(void) {

	struct Sstudent student[10];
	int n = sizeof(student) / sizeof(struct Sstudent);
	read_info(student , n);

	display_info(student , n);

}

void read_info(struct Sstudent student[] , int n){
	int i ;
	for(i = 0; i < n; i++){
		printf("Enter information of the %dth student : \n" , i + 1);


		printf("Enter name : ");

		fflush(stdin); fflush(stdout);

		gets(student[i].name);

		printf("Enter roll number : ");

		fflush(stdin); fflush(stdout);

		scanf("%d" , &student[i].roll_number);

		printf("Enter marks : ");

		scanf("%f" , &student[i].marks);

		fflush(stdin); fflush(stdout);
	}
}

void display_info(struct Sstudent student[] , int n){
	printf("Displaying information\n");
	int i;
	for(i = 0; i < n; i++){
		printf("name : %s\n" , student[i].name);

		printf("roll : %d\n" , student[i].roll_number);

		printf("marks : %f\n" , student[i].marks);
	}


}
