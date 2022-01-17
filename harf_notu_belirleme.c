// harf notu belirleme

#include<stdio.h>
int main()
{
	int vize1, vize2, final;
	float dersort, okulort;

	printf("1. vize notunuzu giriniz:");
	scanf_s("%d", &vize1);
	printf("2. vize notunuzu giriniz:");
	scanf_s("%d", &vize2);
	printf("final notunuzu giriniz:");
	scanf_s("%d", &final);

	dersort = (vize1 * 3 / 10.0 + vize2 * 3 / 10.0 + final * 4 / 10.0);

	if (dersort >= 90)
	{
		printf("aa");
	}
	else if (dersort >= 85 && dersort < 90)
	{
		printf("ba");
	}
	else if (dersort >= 80 && dersort < 85)
	{
		printf("bb");
	}
	else if (dersort >= 75 && dersort < 80)
	{
		printf("cb");
	}
	else if (dersort >= 70 && dersort < 75)
	{
		printf("cc");
	}
	else if (dersort >= 65 && dersort < 60)
	{
		printf("dc");
	}
	else if (dersort >= 60 && dersort < 65)
	{
		printf("dd");
	}
	else printf("kaldiniz");

	return 0;
}