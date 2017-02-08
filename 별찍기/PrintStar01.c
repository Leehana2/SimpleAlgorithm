#include <stdio.h>

int main()
{
	int num;
	int i, j, k;

	scanf("%d", &num);


	for (i = 0; i < num; i++) {
		printf("*");
	}

	printf("\n");


	for (i = 1; i <= num - 2; i++) {

		printf("*");

		for (k = 1; k <= num - 2; k++) {
			printf(" ");
		}

		printf("*\n");
	}


	for (i = 0; i < num; i++) {
		printf("*");
	}

	printf("\n");

	return 0;
}

