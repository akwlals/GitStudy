#include <stdlib.h>
#include <time.h>

int main() {
	int c=0;
	int e=0;
	for (int i = 0; i < 10; i++) {
		int a = rand() % 20;
		int b = rand() % 20;
		int d = rand() % 4;
		if (d == 0) {
			e = a + b;
			printf("%d  + %d = ", a, b);
			scanf("%d", &c);
			if (c == e)
				printf("Y %d\n", e);
			else
				printf("N %d\n", e);
		}
		else if (d == 1) {
			e = a - b;
			printf("%d - %d = ", a, b);
			scanf("%d", &c);
			if (c == e)
				printf("Y %d\n", e);
			else
				printf("N %d\n", e);
		}
		else if (d == 2) {
			e = a * b;
			printf("%d * %d = ", a, b);
			scanf("%d", &c);
			if (c == e)
				printf("Y %d\n", e);
			else
				printf("N %d\n", e);
		}
		else if (d == 3) {
			e = a / b;
			printf("%d / %d = ", a, b);
			scanf("%d", &c);
			if (c == e)
				printf("Y %d\n", e);
			else
				printf("N %d\n", e);
		}
	}
}