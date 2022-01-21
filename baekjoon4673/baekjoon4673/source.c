#include <stdio.h>

int selfnum(int num);

int main() {
	for (int i = 1; i <= 10000; i++) {
		if (selfnum(i) == i)continue;
		printf("%d\n", i);
	}return 0;
}

int selfnum(int num)
{
	int n=0;
	for (int i = 1;i <= 10000;i++) {
		if (num == i + 1 / 10000 + (i / 10000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10)
			return n;
	}

}