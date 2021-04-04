//Date : March 30th 2021
//C Program to convert kilometer to meter, centimeter, feet, iches...
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================

#include<stdio.h>
void main( )
{
  float height, base, area;                   //Declaring Varables

  printf("\nEnter the height of the Triangle: ");
  scanf("%f", &height);
  
  printf("\nEnter the base of the Triangle: ");
  scanf("%f", &base);

  area = (height*base)/2;

  printf("\nArea of the triangle : %f", area);

}
