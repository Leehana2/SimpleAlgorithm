#include<stdio.h>

void main() {
	int num,i,j;
	int *arr,tmp;

	scanf("%d", &num);
	arr = (int *)malloc(sizeof(int)*num);

	for (i = 0; i < num-1; i++) {
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < num-1; j++) {

		for (i = 0; i < num; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			printf("%3d", arr[i]);
		}
	}

}