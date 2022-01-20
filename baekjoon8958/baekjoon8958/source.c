#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	int n = 0, score = 0;
	char test[80] = { 0, };
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		sum = 0;
		score = 1;
		scanf("%s", test);

		for (int j = 0;j < strlen(test);j++) {
			if (test[j] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}
}