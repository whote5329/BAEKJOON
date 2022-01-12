#include<stdio.h>
int main() {
	int A, B;
	while (1) {
		scanf_s("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}
}