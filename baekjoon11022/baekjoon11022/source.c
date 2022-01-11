#include <stdio.h>
int main() {
	int T, A, B;
	scanf_s("%d", &T);
	for (int i = 0;i < T;i++) {
		scanf_s("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}
}