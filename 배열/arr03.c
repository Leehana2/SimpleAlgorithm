#include <stdio.h>
#include <malloc.h>

int main()
{
	int *arr, input, i, j, entryPoint = 0;

	scanf("%d", &input);

	arr = (int *)malloc(sizeof(int) * input);

	for (i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < input; i++) {

		for (j = 0; j < input; j++) {
			printf("%3d", arr[(j + entryPoint) % input]);
		}

		printf("\n");

		entryPoint++;
	}

	return 0;
}