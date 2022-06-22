#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int test(int b,int m)
{
	int r,c = 0;
	for (r = 1; r <= m; r++)
	{
		if (b % r == 0)
		{
			c++;
		}
	}
	if (c % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int b,n,m,r;
	scanf("%d %d", &n, &m);
	for (b = 1; b <= n; b++)
	{
		r = test(b, m);
		if (r == 1)
		{
			printf("%d ", b);
		}
	}
	return 0;
}