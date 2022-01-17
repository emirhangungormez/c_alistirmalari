// sayýnýn kaç basamaklý olduðunu bulma ve rakamlarýn toplamý

#include<stdio.h>
int main()
{
	int n, hane = 0, toplam = 0;
	printf("sayiyi giriniz:");
	scanf_s("%d", &n);
	do
	{
		toplam += (n % 10);
		hane++;
		n = n / 10;
	} while (n > 0);
	printf("rakamlarin toplami: %d ve %d haneli", toplam, hane);
	return 0;
}