//Date : March 30th 2021
//Program to convert Temperature from fahrenheit into celsius.
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================

#include <stdio.h>
int main()
{
float celsius, fahrenheit;
printf("\t\t\tC Program created by Aman Yadav\n");

printf("\nEnter temperature in Celsius : ");
scanf("%f", &celsius);
fahrenheit = (1.8 * celsius) + 32;
printf("\nTemperature in Fahrenheit : %f. ", fahrenheit);

return 0;
}