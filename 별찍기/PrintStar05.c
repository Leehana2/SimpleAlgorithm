#include<stdio.h>
int main() {
	int input, i, j, blank;

	scanf("%d", &input);
	blank = (input - 5) / 2;
	//1
	for (i = 1; i <= input; i++) {
		printf("*");
	}
	printf("\n");



	//2
	for (i = 0; i <= blank; i++) {
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < blank-i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < blank - i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*\n");

	}

	
	
	
	//3
	for (i = 1; i <= input; i++) {
		printf("*");
	}
	printf("\n");


	//4
	for (i = 0; i <= blank; i++) {
		printf("*");
		for (j = blank; j > i; j--) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = blank; j > i; j--) {
			printf(" ");
		}
		printf("*\n");

	}
	
	
	
	//5
	for (i = 1; i <= input; i++) {
		printf("*");
	}


	return 0;
}