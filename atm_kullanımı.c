// atm kullanımı 

#include<stdio.h>
int main()
{
	int islem;
	int tutar;
	int bakiye = 1000;

	printf("islemler \n1:para cekme \n2:para yatirma \n3:havale \n4:bakiye sorgulama \n5:kart iade \n\n\n");
	printf("isleminizi seciniz: ");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1:
		printf("bakiyeniz: %d\n", bakiye);
		printf("cekilecek tutar:");
		scanf_s("%d", &tutar);
		if (tutar > bakiye) printf("bakiyeniz yetersiz");
		bakiye -= tutar;
		printf("bakiyeniz: %d", bakiye);
		break;
	case 2:
		printf("bakiyeniz: %d\n", bakiye);
		printf("yatirilacak tutar:");
		scanf_s("%d", &tutar);
		bakiye += tutar;
		printf("bakiyeniz: %d", bakiye);
		break;
	case 3:
		printf("bakiyeniz: %d\n", bakiye);
		printf("havale yapilacak tutar:");
		scanf_s("%d", &tutar);
		if (tutar > bakiye) printf("bakiyeniz yetersiz");
		bakiye -= tutar;
		printf("bakiyeniz: %d", bakiye);
		break;
	case 4:
		printf("bakiyeniz: %d", bakiye);
		break;
	case 5:
		printf("kart iade edildi.");
		break;
	default:
		printf("bilinmeyen islem.");
	}
	return 0;
}