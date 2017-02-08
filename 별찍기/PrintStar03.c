#include<stdio.h>
int main() {
	int num, i, j;

	scanf("%d", &num);
	
	for (j = num; j > 0; j--) {
		for (i = 0; i < num - j; i++)	printf(" ");
		for (i = 0; i < j; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}