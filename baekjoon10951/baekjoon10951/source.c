#include<stdio.h>
int main() {
	int A = 1, B = 1;
	while (scanf_s("%d %d", &A, &B) != EOF) {
		printf("%d\n",A + B);
	}
	return 0;
}