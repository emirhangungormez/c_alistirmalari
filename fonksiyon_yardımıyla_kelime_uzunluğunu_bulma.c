// fonksiyon yardımıyla kelime uzunluğunu bulma

#include<stdio.h>
#include<string.h> // kütüphanesinde bulunan strlen() fonksiyonu aşağıdaki fonksiyonun görevini yapmaktadır.
int uzunlukdon(char name[])
{
	int uzunluk = 0;
	int i;

	for (i = 0; name[i] != '\0'; i++) // '\0' char karakterlerinde sonlandırıcı değerdir.
	{
		uzunluk++;
	}
	return uzunluk;
}
int main()
{
	char isim[] = "emir";
	printf("%d\n", uzunlukdon(isim));

	printf("%d", strlen(isim)); // oluşturduğumuz "uzunlukdon" ile aynı fonksiyon.

	return 0;
}