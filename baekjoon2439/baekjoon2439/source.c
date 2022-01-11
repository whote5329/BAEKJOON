#include <stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 0;i <N;i++) {
		for(int j = 1 ; j<N-i ;j++){
			printf(" ");
		}
		for (int k = 0;k < i+1;k++) {
			printf("*");
		}
		printf("\n");
	}
}