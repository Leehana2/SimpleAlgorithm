#include<stdio.h>
void main() {
	int arr[] = { 0, };
	int input,i;

	scanf("%d", &input);

	for (i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = input - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}