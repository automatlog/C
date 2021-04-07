//Date : April 6th 2021
//C Program to find the largest number from the three numbers using if statement.
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//===========================================================================

#include <stdio.h>  
int main()  
{  
    int num1, num2, num3;
	
    printf("Enter three numbers....");
	printf("1st Number : ");
	printf("2nd Number : ");
	printf("3rd Number : ");
    scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
    if(num1 > num2 && num1 > num2)  
    {  
        printf("\n%d is largest",num1);  
    }  
    if(num2 > num1  && num2 > num3)  
    {  
        printf("\n%d is largest",num1);  
    }  
    if(num3 > num1 && num3 > num2)  
    {  
        printf("\n%d is largest",num3);		
    }
	
	return 0;
}   