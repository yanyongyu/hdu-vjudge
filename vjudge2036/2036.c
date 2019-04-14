# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a[2][105];
	double sum;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &a[0][i], &a[1][i]);
		}
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				sum += 1 / 2.*(a[0][i] * a[1][0] - a[1][i] * a[0][0]);
			}
			else
			{
				sum += 1 / 2.*(a[0][i] * a[1][i + 1] - a[1][i] * a[0][i + 1]);
			}
		}
		printf("%.1lf\n", sum);
	}
	return 0;
}