#include<stdio.h>

void main()
{
	char a[100],b[100];
	printf("Enter your Username:-");
	gets(a);
	printf("Enter your Password:-");
	gets(b);
	
	if(strcmp(a,"Jesica")==0)
	{
		if(strcmp(b,"Jesica@123")==0)
		{
			printf("User.... loging.... Successfully....");
		}
		else
		{
			printf("Your entered password is invalid.");
		}
	}
	else
	{
		printf("Your entered username is invalid.");
	}
}
