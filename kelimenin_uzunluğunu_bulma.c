// kelimenin uzunluðunu bulma

#include <stdio.h>
int uzunluk(char* p)
{
	int uzunluk = 0;
	int i = 0;

	for (; p[i] != '\0'; i++)
	{
		uzunluk++;
	}
	return uzunluk;
}
int main()
{
	char yazi[] = "emirhan";
	printf("%d", uzunluk(yazi));

	return 0;
}