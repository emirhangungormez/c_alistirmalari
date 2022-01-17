// dersten kalma 

#include<stdio.h>
int main()
{
	int vize1, vize2, vize3;
	float dersort;

	printf("1. vize notunuzu giriniz:");
	scanf_s("%d", &vize1);
	printf("2. vize notunuzu giriniz:");
	scanf_s("%d", &vize2);
	printf("3. vize notunuzu giriniz:");
	scanf_s("%d", &vize3);

	dersort = (vize1 + vize2 + vize3) / 3.0;

	if (dersort < 60)
	{
		printf("dersten kaldiniz.");
	}

	else
	{
		printf("dersi gectiniz");
	}

	return 0;
}