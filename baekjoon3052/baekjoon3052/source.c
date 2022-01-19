#include<stdio.h>
int main() {
	int a,lum;
	int b[42] = { 0, };
	int count = 0;
	for (int i = 0;i < 10;i++) {
		scanf_s("%d", &a);
		lum = a % 42;
		b[lum]++;
	}
	for (int j = 0;j < 42;j++) {
		if (b[j] > 0)
			count++;
	}
	printf("%d", count);
}