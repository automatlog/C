//Date : April 6th 2021
//Program to check whether the student is pass or fail...
//Created by B.Tech Cyber Security & Network's student : 20C23001-Aman Yadav
//==========================================================================

#include<stdio.h>

int main()
{
	int marks;

	printf("\n Enter the marks you have obtained : ",EOF);
	scanf("%d",&marks);
	
	printf("\n You have entered marks is %d",marks);
	
	if(marks >= 33 && marks <= 100)
	{
		printf("\n\n Congratulation... You are pass in the examination...! ");
	}
	else if(marks > 100 || marks < 0)
	{
		printf("\n\n Invalid Marks Entered... Please Retry...");	
	}
	else
	{
		printf("\n\n Sorry... You are fail in the examination...! ");
	}
	
	return 0;
}