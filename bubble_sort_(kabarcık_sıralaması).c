// bubble sort (kabarc�k s�ralamas�)

#include <stdio.h>
#define MAX 50
void bubblesort(int arr[], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
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

	bubblesort(array, size);
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
	}

	return 0;
}