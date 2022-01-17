// struct (yapý) kullanýmý

#include<stdio.h>
struct ogrenci {
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};
int main()
{
	struct ogrenci emir = { "emir", "gungormez", 2023, 21 };

	printf("%s %s %d %d", emir.isim, emir.soyisim, emir.numara, emir.yas);
	return 0;
}