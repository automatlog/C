//Date : April 1st 2021
//C Program to find total marks of four subjects and Percentage
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================

#include <stdio.h>

int main()
{
	int mark1, mark2, mark3, mark4, tot_marks=0;
	float percentage = 0.0;

	printf("\t\t\tEnroll No.: 20C23026 | Name : Aman Yadav" );

    printf("\nEnter Marks of RPD Subject : ");
	scanf("%d",&mark1);

	printf("\nEnter Marks of DMP Subject : ");
	scanf("%d",&mark2);

	printf("\nEnter Marks of WT Subject : ");
	scanf("%d",&mark3);

	printf("\nEnter Marks of Python Subject : ");
	scanf("%d",&mark4);

	tot_marks = mark1 + mark2 + mark3 + mark4;
	printf("Total Marks of all subject %d",tot_marks);

	percentage = (tot_marks/400) * 100;
	printf("Percentage of subject %f",percentage);


    return 0;
}
