// fonksiyon yard�m�yla fakt�riyel

#include<stdio.h>
int faktoriyel(int sayi)
{
	int fact = 1;
	for (; sayi > 0; sayi--)
	{
		fact *= sayi;
	}
	return fact; // hat�rlatma: d�� s�nyaya sonucu d�nmek i�in kullan�yoruz.
}

int main()
{
	int n;
	printf("faktoriyelini istedi�iniz sayiyi giriniz:");
	scanf_s("%d", &n);

	printf("faktoriyel: %d", faktoriyel(n));

	return 0;
}