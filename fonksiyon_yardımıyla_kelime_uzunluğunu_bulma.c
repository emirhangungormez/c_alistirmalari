// fonksiyon yardýmýyla kelime uzunluðunu bulma

#include<stdio.h>
#include<string.h> // kütüphanesinde bulunan strlen() fonksiyonu aþaðýdaki fonksiyonun görevini yapmaktadýr.
int uzunlukdon(char name[])
{
	int uzunluk = 0;
	int i;

	for (i = 0; name[i] != '\0'; i++) // '\0' char karakterlerinde sonlandýrýcý deðerdir.
	{
		uzunluk++;
	}
	return uzunluk;
}
int main()
{
	char isim[] = "emir";
	printf("%d\n", uzunlukdon(isim));

	printf("%d", strlen(isim)); // oluþturduðumuz "uzunlukdon" ile ayný fonksiyon.

	return 0;
}