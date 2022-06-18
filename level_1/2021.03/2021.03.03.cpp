#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	scanf("%d", &i);
	if (i >= '0' && i <= '9')
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}