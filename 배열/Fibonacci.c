#include<stdio.h>

void main() {
	int input, i;

	int arr[15] = { 0,1 };

	for (i = 0; i < 13; i++) {
		arr[i + 2] = arr[i] + arr[i + 1];
		printf("%d ", arr[i]);
	}


	
}