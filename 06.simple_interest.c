//Date : March 30th 2021
//Program to convert kilometer to meter, centimeter, feet, iches...
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================

#include<stdio.h>
void main( )
{   
    
    float principle, rate, time, SimpInt;      //Declaring variable
    
    
    printf("Enter principle(amount in Rs.) : ");
    scanf("%f", &principle);

    printf("Enter time : ");
    scanf("%f", &time);

    printf("Enter rate : ");
    scanf("%f", &rate);

    // Calculation
    SimpInt = (principle * time * rate) / 100;

    //Printing the result
    printf("Simple Interest = %f", SimpInt);

}