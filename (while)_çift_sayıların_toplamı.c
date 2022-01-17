// girilen sayýlarý toplama

#include<stdio.h>
#include<stdbool.h> // true'nin çalýþmasý için
int main()
{
	int toplam = 0;
	int i;
	int sayi;

	for (i = 0; true; i++)
	{
		printf("sayiyi giriniz: (cikmak icin -1'e basin.)");
		scanf_s("%d", &sayi);
		if (sayi == -1)
		{
			break;
		}
		toplam += sayi;
	}
	printf("%d", toplam);

	return 0;
}