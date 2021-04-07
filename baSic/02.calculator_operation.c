//Date : April 1st 2021
//C Program to perform basic calculator operation.
//Created by B.Tech Cyber Security & Network's student : 20C23026-Aman Yadav
//==========================================================================


#include<stdio.h>

int main()
{
    int num1,num2, num3, sum = 0, sub = 0, multi = 1;
    float divi = 0.0;                    //declartion and initialization of variable divi

	printf("\t\t\tEnroll No.: 20C23026 | Name : Aman Yadav" );
	printf("\nEnter any three numbers for performing addition, subtraction, multiplication and division : ");
	scanf("%d%d%d",&num1,&num2,&num3);

	printf("\nNum 1 = %d \nNum 2 = %d \nNum 3 = %d", num1, num2, num3);
	sum = num1 + num2 + num3;
	sub = num1 - num2 - num3;
	multi = num1 * num2 * num3;
	divi = (num1/num2)/num3;

	printf("\nAddition     : %d",sum);
	printf("\nSubtraction  : %d",sub);
	printf("\nDivision      : %f",divi);
	printf("\nMultiplication : %d",multi);

 return 0;

}
