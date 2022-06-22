#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i;
	double db;
	scanf("%d %lf",&i, &db);
	printf("%.2lf %d", db, i);
	return 0;
}