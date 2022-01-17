// fonksiyon yardýmýyla faktöriyel

#include<stdio.h>
int faktoriyel(int sayi)
{
	int fact = 1;
	for (; sayi > 0; sayi--)
	{
		fact *= sayi;
	}
	return fact; // hatýrlatma: dýþ sünyaya sonucu dönmek için kullanýyoruz.
}

int main()
{
	int n;
	printf("faktoriyelini istediðiniz sayiyi giriniz:");
	scanf_s("%d", &n);

	printf("faktoriyel: %d", faktoriyel(n));

	return 0;
}