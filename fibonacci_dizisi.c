// fibonacci dizisi

# include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int d; //döngü deðiþkeni

	printf("%d\n%d\n", i, j);
	for (d = 0; d < 11; d++)
	{
		int temp = j;
		j += i;
		i = temp;

		printf("%d\n", j);
	}
	return 0;
}