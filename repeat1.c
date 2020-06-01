#include <stdio.h>

int main()
{
	int arr[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};

	int s = sizeof(arr)/sizeof(int);

	int i = 0;

	for (i = 0; i < s; i++) {
		arr[arr[i] % s] = arr[arr[i] % s] + s;
	}
	for (i = 0; i < s; i++) 
		if (arr[i] >= s*2)
			printf("%d ", i);

	printf("\n");
	for (i = 0; i < s; i++) {
		arr[arr[i] % s] = arr[arr[i] % s] - s;
	}
	for (i = 0; i < s; i++)
		printf("%d ", arr[i]);
	printf("\n");

}
