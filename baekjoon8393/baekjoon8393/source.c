#include<stdio.h>
int main() {
	int i,n,add=0;
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		add += i+1;
	}
	printf("%d", add);
}