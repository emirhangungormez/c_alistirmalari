// fonksiyon yard�m�yla (hata kodu 404) yazd�rma

#include<stdio.h>
void hatayibas(int hata) //d�nd�r�lmeyen fonksiyon
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