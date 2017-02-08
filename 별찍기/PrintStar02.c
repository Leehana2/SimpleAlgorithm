#include<stdio.h>

int main() {
	
	int num;
	int i, j;
	int blank;

	scanf("%d", &num);
	blank = (num - 3) / 2;

	//1
	for (i = 0; i < num; i++) {
		printf("*");


	}
	printf("\n");



	//2
	for (i = 0; i < blank; i++) {
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = blank - 1 ; j > i; j--) {
			printf(" ");
		}
		printf(" ");
		for (j = blank - 1; j > i; j--) {
			printf(" ");
		}
		printf("*");
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*\n");
			
	}
	//3
	printf("*");
	for (i = 0; i < blank; i++) {
		printf(" ");
	}
	printf("*");
	for (i = 0; i < blank; i++) {
		printf(" ");
	}
	printf("*");


	printf("\n");


	//4
	for (i = blank; i > 0; i--) {
		printf("*");
		for (j = i-1; j > 0; j--) {
			printf(" ");
		}
		printf("*");
		for (j = i ; j < blank ; j++) {
			printf(" ");
		}
		printf(" ");
		for (j = i ; j < blank ; j++) {
			printf(" ");
		}
		printf("*");
		for (j = i - 1 ; j > 0; j--) {
			printf(" ");
		}
		printf("*\n");
			
	}
	//5
	for (i = 0; i < num; i++) {
		printf("*");

	}

	

	return 0;
}