#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int test = 0, n = 0, count = 0;
	double sum = 0, avg = 0;

	scanf("%d", &test);

	int score[1000] = { 0, };

	for (int i = 0;i < test;i++) {
		scanf("%d", &n);
		sum = 0, avg = 0, count = 0;
		for (int j = 0;j < n;j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = sum / n;

		for (int k = 0;k < n;k++) {
			if (score[k] > avg) {
				count++;
			}
		}
		printf("%0.3f%%\n", (double)count / n * 100);
	}
}