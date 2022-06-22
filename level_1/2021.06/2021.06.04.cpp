#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int test(int n) {
	int i;
	if (n % 7 == 0) {
		return 1;
	}
	for (i = n; i > 0;i = i / 10) {
		if (i % 10 == 7) {
			return 1;
		}
	}
	return 0;
}

int main(){
	int n,i,r,h = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		r = test(i);
		if (r == 1 ) {
			h = h + i;
		}
	}
	printf("%d", h);
	return 0;
}