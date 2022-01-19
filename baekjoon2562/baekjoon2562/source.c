#include <stdio.h>
int main() {
	int a[9] = { 0 };
	int i=0, max = 0, maxi=0;
	for (i;i < 9;i++) {
		scanf_s("%d", &a[i]);
		if (a[i] > max) {
			max = a[i];
			maxi = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", maxi);
}