#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int i,n,j,m,k,o = 0;
	scanf("%d %d", &n,&k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m % 10 == k)
		{
			o = o + m;
		}
	}
	printf("%d\n", o);
	return 0;
}