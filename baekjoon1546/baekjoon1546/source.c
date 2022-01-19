#include <stdio.h>

int main()
{
	int N;
	int max = 0;
	float avg = 0;

	scanf_s("%d", &N);

	int score[N];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < N; i++) {
		avg += (float)score[i] / max * 100;
	}

	printf("%f\n", avg / N);

	return 0;
}

/*#include<stdio.h>
int main() {
	int n, max = 0;
	float* score;
	scanf_s("%d", &n);
	score = (float*)malloc(sizeof(float) * n);

	int score[n] = { 0, };
	double nscore[4] = { 0, }, ave = 0, mul = 0;
	for (int i = 0;i < n;i++) {
		scanf_s("%d", &score[i]);
		if (score[i] > max)
			max = score[i];
	}
	for (int j = 0;j < n;j++) {
		nscore[j] = (double)score[j] / max * 100;
		mul += nscore[j];
	}
	ave = (double)mul / n;
	printf("%0.2f", ave);
}*/