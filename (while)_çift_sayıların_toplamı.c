// girilen say�lar� toplama

#include<stdio.h>
#include<stdbool.h> // true'nin �al��mas� i�in
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