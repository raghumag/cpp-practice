#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void repeating(int arr[], int n)
{
	int i;
	printf("Print Repeating ones\n");
	for (i = 0;i < n;i++) {
		if (arr[abs(arr[i])] >= 0)
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		else
			printf(" %d \n", abs(arr[i]));
	}
}

int main()
{
	int arr[] = {1, 2, 1, 3, 4, 6};
	int arr_size = sizeof(arr)/sizeof(int);

	repeating(arr, arr_size);
	return 0;
}
