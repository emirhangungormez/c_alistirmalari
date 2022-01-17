// pointer kavram�n�n anla��lmas�

#include<stdio.h>
void degerdegistir(int a, int b)
{
	int gecici = a;
	a = b;
	b = gecici;
	printf("a:%d b:%d\n", a, b); // fonksiyon iki de�eri birbiriyle de�i�tirmektedir.
}

int main()
{
	int x = 5, y = 10;

	degerdegistir(x, y);

	printf("x:%d y:d%", x, y);
	return 0;
}  // fonksiyonu kulland���m�z vakit de�erlerin de�i�medi�ini g�rece�iz.
   // bunun sebebi fonksiyonda "yerel de�i�ken" kullan�lmas�ndan �t�r�d�r.
   // yaln�zca x ve y'nin de�erleri �zerinde i�lem yap�lm��t�r, kendileriyle
   // de�il. bu metoda "call by value" denir.

-------------

#include<stdio.h>
void degerdegistir(int* a, int* b)
{
	int gecici = *a;
	*a = *b;
	*b = gecici; // fonksiyon iki de�eri pointer yard�m�yla de�i�tirmi�tir.
}

int main()
{
	int x = 5, y = 10;

	degerdegistir(&x, &y);

	printf("x:%d y:,%d", x, y);
	return 0;
}  // fonksiyonumuz bu sefer do�ru �al��acakt�r. bu metoda "call by reference" denir.