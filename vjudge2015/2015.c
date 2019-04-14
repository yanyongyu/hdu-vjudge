# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int a, n, m, sum;
	while (~scanf("%d %d", &n, &m))
	{
		a = 2;
		sum = 0;
		if (n < m)
		{
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &a);
				sum += a;
			}
			printf("%d\n", sum / n);
			continue;
		}
		for (int x = 0; x < m; x++)
		{
			sum += a;
			a += 2;
		}
		printf("%d", sum / m);
		for (int i = 0; i < (n / m) - 1; i++)
		{
			sum = 0;
			for (int x = 0; x < m; x++)
			{
				sum += a;
				a += 2;
			}
			printf(" %d", sum / m);
		}
		sum = 0;
		if (n%m != 0)
		{
			for (int i = 0; i < (n % m); i++)
			{
				sum += a;
				a += 2;
			}
			printf(" %d", sum / (n % m));
		}
		printf("\n");
	}
	return 0;
}