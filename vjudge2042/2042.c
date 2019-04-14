# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, m, sum;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			sum = 3;
			scanf("%d", &m);
			for (; m > 0; m--)
			{
				sum = (sum - 1) * 2;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}