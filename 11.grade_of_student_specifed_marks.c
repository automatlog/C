//Date : 2nd April 2021
//C Program to calculate the grade of the student according to the specified marks, using if else-if statement
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//===========================================================================================================

#include <stdio.h>  
int main()  
{  
    int marks;
	
    printf("Enter your marks : ");  
    scanf("%d",&marks);
	
    if(marks > 85 && marks <= 100)  
    {  
        printf("Congrats ! you scored grade A...");   
    }  
    else if (marks > 60 && marks <= 85)   
    {  
        printf("You scored grade B +...");  
    }  
    else if (marks > 40 && marks <= 60)   
    {  
        printf("You scored grade B...");  
    }  
    else if (marks > 30 && marks <= 40)   
    {  
        printf("You scored grade C...");   
    }  
    else   
    {  
        printf("Sorry you are fail...");   
    }  
	
	return 0;
}  