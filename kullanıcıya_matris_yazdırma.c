// kullan�c�ya matris yazd�rma

#include<stdio.h>
int main()
{
	int matris[3][3];
	int i, j;
	// printf("%d", matris[2][2]); // matris elemanlar�ndan birini yazd�rmak i�in

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d ", &matris[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}

	return 0;
}