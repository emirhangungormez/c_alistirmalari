// fonksiyon yard�m�yla matris yazd�rma 

#include<stdio.h>
void bastir(int matrisimiz[][4], int size) // 1. boyutu kendimiz "size" yard�m�yla belirtmeliyiz.
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", matrisimiz[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int matris[3][4];
	int i, j;

	printf("matrisi doldurunuz:");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &matris[i][j]);
		}
	}
	bastir(matris, 3);

	return 0;
}