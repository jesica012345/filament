#include<stdio.h>
void main()
{
	char a[100],b[100];
	printf("Enter the string you want to check:-");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("Entered string is palindrome.");
	}
	else
	{
		printf("Entered string is not palimdrome.");
	}
}
