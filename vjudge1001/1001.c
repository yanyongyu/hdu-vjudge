# include <stdio.h>

int main()
{
	int a, i, sum;
	while (scanf_s("%d", &a))
	{
		sum = 0;
		for (i = 1; i <= a; i++)
		{
			sum += i;

		}
		printf("%d\n\n", sum);
	}
	return 0;
}