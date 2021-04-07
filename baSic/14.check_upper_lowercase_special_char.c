//Date : April 6th 2021
//Program to check whether, the character is uppercase, lowercase or special Symbol.
//Created by B.Tech Cyber Security & Network's student : 20C23001-Aman Yadav
//==========================================================================

#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character:");
	scanf ("%c",&ch);
	
	if (ch>=65 && ch<=90)
	{
		printf("\n Upper case letter");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n Lower case letter");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nDigit");
	}
	else if((ch>=0 && ch<=47) || (ch>=58&& ch<=64) || (ch>=91&& ch<=96) || (ch>=123&& ch<=127))
	{
		printf("\n Special symbol");
	}

	
}

