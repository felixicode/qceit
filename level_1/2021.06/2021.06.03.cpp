#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	char i;
	scanf("%c", &i);
	if (i >= 'A' && i <= 'Z')
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}