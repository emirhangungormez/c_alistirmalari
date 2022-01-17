// pointer kavramýnýn anlaþýlmasý

#include<stdio.h>
void degerdegistir(int a, int b)
{
	int gecici = a;
	a = b;
	b = gecici;
	printf("a:%d b:%d\n", a, b); // fonksiyon iki deðeri birbiriyle deðiþtirmektedir.
}

int main()
{
	int x = 5, y = 10;

	degerdegistir(x, y);

	printf("x:%d y:d%", x, y);
	return 0;
}  // fonksiyonu kullandýðýmýz vakit deðerlerin deðiþmediðini göreceðiz.
   // bunun sebebi fonksiyonda "yerel deðiþken" kullanýlmasýndan ötürüdür.
   // yalnýzca x ve y'nin deðerleri üzerinde iþlem yapýlmýþtýr, kendileriyle
   // deðil. bu metoda "call by value" denir.

-------------

#include<stdio.h>
void degerdegistir(int* a, int* b)
{
	int gecici = *a;
	*a = *b;
	*b = gecici; // fonksiyon iki deðeri pointer yardýmýyla deðiþtirmiþtir.
}

int main()
{
	int x = 5, y = 10;

	degerdegistir(&x, &y);

	printf("x:%d y:,%d", x, y);
	return 0;
}  // fonksiyonumuz bu sefer doðru çalýþacaktýr. bu metoda "call by reference" denir.