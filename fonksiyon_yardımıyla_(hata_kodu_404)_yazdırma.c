// fonksiyon yardýmýyla (hata kodu 404) yazdýrma

#include<stdio.h>
void hatayibas(int hata) //döndürülmeyen fonksiyon
{
	printf("hata kodu: %d", hata);
}

int main()
{
	int sayi;
	printf("lutfen negatif olmayan bir sayi girin:");
	scanf_s("%d", &sayi);

	if (sayi < 0)
	{
		hatayibas(404);
	}
	else
	{
		printf("tebrikler.");
	}

	return 0;
}