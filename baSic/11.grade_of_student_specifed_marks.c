//Date : April 6th 2021
//C Program to print the grade of the student according to the specified marks, using if else-if statement
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//========================================================================================================

#include <stdio.h>  
int main()  
{  
    int marks;
	
    printf("Enter your marks : ");  
    scanf("%d",&marks);
	
	printf("\n You have entered marks is %d",marks);
	
    if(marks > 75 && marks <= 100)  
    {  
        printf("\n Congrats... You scored grade A+...!");   
    }  
    else if(marks > 65 && marks <= 75)   
    {  
        printf("\n You scored grade A...!");  
    }  
    else if(marks > 45 && marks <= 65)   
    {  
        printf("\n You scored grade B...");  
    }  
    else if(marks >= 33 && marks <= 45)   
    {  
        printf("\n You scored grade C...");   
    }  
    else if(marks > 0 && marks < 33)  
    {  
        printf("\n Sorry... You scored grade F...");   
    }  
	
	return 0;
}  