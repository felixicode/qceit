#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int a, b, c;
	double da, db, dc, h;
	scanf("%d %d %d", &a, &b, &c);
	da = (double)a;
	db = (double)b;
	dc = (double)c;

	h = (da /db) * dc;
	printf("%.6lf", h);
	return 0;
}