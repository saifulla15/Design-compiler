#include<stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();
void l()
{
	s();
	lprime();
}
void s()
{
	if(p[c]=='a')
	c++;
	else if(p[0]=='(')
	{
		c++;
		l();
		if(p[c]==')')
		c++;
		else
		c--;
	}
	else
	printf("invalid expression");
	
}
void lprime()
{
	if(p[c]==',')
	{
		c++;
		s();
		lprime();
	}
}
int main()
{
	printf("implementation of recursive descent parsing");
	printf("Exp");
	scanf("%s",&p);
	s();
	if(p[c]=='$')
	printf("string is accepted");
	else
	printf("string is rejected");
	
}
