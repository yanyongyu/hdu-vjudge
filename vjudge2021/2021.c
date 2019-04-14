# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a, sum;
	while (~scanf("%d", &n), n != 0)
	{
		sum = 0;
		for (; n > 0; n--)
		{
			scanf("%d", &a);
			if (a >= 100)
			{
				sum += a / 100;
				a %= 100;
			}
			if (a >= 50)
			{
				sum += a / 50;
				a %= 50;
			}
			if (a >= 10)
			{
				sum += a / 10;
				a %= 10;
			}
			if (a >= 5)
			{
				sum += a / 5;
				a %= 5;
			}
			if (a >= 2)
			{
				sum += a / 2;
				a %= 2;
			}
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}