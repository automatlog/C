//Date : March 30th 2021
//Program to convert kilometer to meter, centimeter, feet, iches...
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================

#include<stdio.h>
void main( )
{
	float km, m, cm, feet, inch;                       //Declaring variable
	printf("Enter the distance in kilometers : ");
	scanf("%f", &km) ;

	//Calculation
	m = km*1000;
	cm = m*100;
	feet = km*3280.8;
	inch = feet*12;

	printf("\nThe distance in meters : %f.", m);
	printf("\nThe distance in centimeters : %f.",cm);
	printf("\nThe distance in feet : %f.", feet);
	printf("\nThe distance in inches : %f.", inch);

}
