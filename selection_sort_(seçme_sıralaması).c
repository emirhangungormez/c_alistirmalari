// selection sort (seçme sýralamasý)

#include <stdio.h>
#define MAX 50
void selectionsort(int arr[], int size)
{
	int i, j;
	int minimumindex;
	for (i = 0; i < size; i++)
	{
		minimumindex = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minimumindex])
			{
				minimumindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;
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

	selectionsort(array, size);
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
	}

	return 0;
}