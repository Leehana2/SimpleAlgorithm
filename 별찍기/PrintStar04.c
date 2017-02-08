#include<stdio.h>
int main() {
	int num, i, j, blank;

	scanf("%d", &num);
	blank = (num - 1) / 2;

	for (i = 1; i <= num; i++) {
		if (i % 2 == 1) {
			for (j = 0; j < blank; j++) {
				printf(" ");
			}
			blank--;


			for (j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("\n");
		}
	}
}