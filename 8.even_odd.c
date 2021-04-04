//Date : 2nd April 2021
//C Program to check whether a number is even or odd using if-else statement.
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//===========================================================================

#include<stdio.h>    
int main()
{    
	int number = 0;    
	printf("Enter a number : ");    
	scanf("%d",&number);    
	if(number%2 == 0)
	{    
		printf("%d is even number.",number);    
	}
	else
	{
		printf("%d is odd number.",number);
	}
	
	return 0;  
}    