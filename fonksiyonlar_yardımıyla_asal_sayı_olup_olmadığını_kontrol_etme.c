// fonksiyonlar yardýmýyla asal sayý olup olmadýðýný kontrol etme

#include<stdio.h>
int asalkontrol(int sayi)
{
	int i;
	for (i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			return 0; // return ayný zamanda fonksiyonu bitirir.
		}
	}
	return 1;
}
int main()
{
	int n;
	printf("bir sayi giriniz:");
	scanf_s("%d", &n);

	if (asalkontrol(n) == 0)
	{
		printf("bu sayi asal degildir.");
	}
	else
	{
		printf("bu sayi asal sayidir.");
	}

	return 0;
}