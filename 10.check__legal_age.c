//Date : 2nd April 2021
//C Program to check whether a person is legal age or under age.
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//===========================================================================

#include <stdio.h>  
int main()  
{  
    int age;   
    printf("Enter your age : ");   
    scanf("%d",&age);  
    if(age>=18)  
    {  
        printf("\nLegal Age...");   
    }  
    else   
    {  
        printf("\nUnder Age...");   
    }  
}  