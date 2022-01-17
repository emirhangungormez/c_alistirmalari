// kürenin hacmi

#include<stdio.h>
#define PI 3.14 //sabit deðer tanýmlama
int main()
{
	int yaricap;
	float hacim;
	printf("kurenin yaricapini giriniz:");
	scanf_s("%d", &yaricap);

	hacim = (4 / 3.0) * PI * (yaricap * yaricap * yaricap);
	printf("kurenin hacmi: %.2f'dir", hacim);
		
	getchar();
	return 0;
}