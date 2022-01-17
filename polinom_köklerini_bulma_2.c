// polinom köklerini bulma (ax**2 + bx + c)

#include<stdio.h>
#include<math.h> // karekök almak için kütüphane ekliyoruz
int main()
{
	int a, b, c;
	float x1, x2;
	float delta;

	printf("denklemin a'sini giriniz:");
	scanf_s("%d", &a);
	printf("denklemin b'sini giriniz:");
	scanf_s("%d", &b);
	printf("denklemin c'sini giriniz:");
	scanf_s("%d", &c);

	delta = (b * b) - (4 * a * c);
	x1 = (-b + (sqrt(delta))) / 2 * a; // sqrt karekök alma fonksiyonu
	x2 = (-b - (sqrt(delta))) / 2 * a;

	printf("denklemin 1. koku %.2f, 2. koku %.2f'dir", x1, x2);

	return 0;
}