#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	if (c >= '0' && c <= '9')
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}