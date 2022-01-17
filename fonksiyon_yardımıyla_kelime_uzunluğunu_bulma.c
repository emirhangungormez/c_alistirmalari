// fonksiyon yard�m�yla kelime uzunlu�unu bulma

#include<stdio.h>
#include<string.h> // k�t�phanesinde bulunan strlen() fonksiyonu a�a��daki fonksiyonun g�revini yapmaktad�r.
int uzunlukdon(char name[])
{
	int uzunluk = 0;
	int i;

	for (i = 0; name[i] != '\0'; i++) // '\0' char karakterlerinde sonland�r�c� de�erdir.
	{
		uzunluk++;
	}
	return uzunluk;
}
int main()
{
	char isim[] = "emir";
	printf("%d\n", uzunlukdon(isim));

	printf("%d", strlen(isim)); // olu�turdu�umuz "uzunlukdon" ile ayn� fonksiyon.

	return 0;
}