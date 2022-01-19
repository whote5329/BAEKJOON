#include<stdio.h>
int main() {
	int num[10] = { 0, };
	int A, B, C;
	int a=0, lum;
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	a = A * B * C;
	for (int i = 0;a>0 ;i++) {
		lum = a % 10;
		num[lum] += 1;
		a = a / 10;
	}

	for (int j = 0;j < 10;j++) {
		printf("%d\n", num[j]);
	}
}