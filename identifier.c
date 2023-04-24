#include<stdio.h>
int main()
{
	char value;
	printf("enter a value:");
	scanf("%c",&value);
	if((value>='a' && value<='z')||(value>='A' && value<='Z'))
	{
		printf("identifier");
	}
	else
	{
		printf("not an identifier");
	}
	if((value>='0' && value<='9'))
	{
		printf("digit");
	}
	else
	{
		printf("not a digit");
	}
}