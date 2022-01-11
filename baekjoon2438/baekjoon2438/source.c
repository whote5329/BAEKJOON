#include <stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
	
}