// struct (yapı) kullanımı 2

#include<stdio.h>
struct araba {
	int tekerleksayisi;
	int vitesayisi;
	int model;
	float motor;
	int beygir;
}araba1,araba2;

int main()
{
	araba1 = { 4,5,2020,1.1,180 };
	araba2 = araba1;

	printf("%d %d %d %.2f %d", araba2, araba1);

	return 0;
}