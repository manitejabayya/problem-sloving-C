#include<stdio.h>
#include<string.h>
main()
{
	
	char user[20],password[20];
	printf("Enter the user name:\n");
	scanf("%s",&user[20]);
	printf("Enter the password:\n");
	scanf("%s",&password[20]);
	if(strcmp(user,"maniteja369")&& strcmp(password,"123456789"))
	{
		printf("WELCOME MANITEJA\n");
	}
	else
	{
		printf("INVALID User name or password..please try again \n");
	}
}
