#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int test(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i, n, r, mp = 2;
	scanf("%d", &n);
	for (i = 2; i < n;i++)
	{
		r = test(i);
		if (r == 1)
		{
			if (mp < i)
			{
				mp = i;
			}
		}
	}
	printf("%d\n", mp);
	return 0;
}