// insertion sort ( sokulma sýralamasý )

#include <stdio.h>
#define MAX 500

void insertionsort(int arr[], int size)
{
	int i, j;
	int eleman;

	for (i = 1; i < size; i++)
	{
		eleman = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > eleman)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = eleman;
	}
}

int main()
{
	int i;
	int array[MAX], size;
	printf("kac elemanli?");
	scanf_s("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	insertionsort(array, size);
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
	}

	return 0;
}