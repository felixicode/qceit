#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, n, k,o,h = 0;
	scanf("%d %d",&n,&k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &o);
		if (o % 10 == k)
		{
			h = h + o;
		}
	}
	printf("%d\n", h);
	return 0;
}