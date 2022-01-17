// dizinin içerisindeki en büyük sayýyý bulma

#include <stdio.h>
int max(int* a, int uzunluk)
{
	int maks = a[0];
	int i;

	for (i = 1; i < uzunluk; i++)
	{
		if (a[i] > maks)
		{
			maks = a[i];
		}
	}
	return maks;
}

int main()
{
	int sayilar[5] = { 3,4,42,100,1 };
	int maks = max(sayilar, 5);

	printf("dizinin en buyuk elemani: %d'dir.", maks);

	return 0;
}