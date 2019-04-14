# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a, min, max;
	double aver, sum;
	while (~scanf("%d", &n))
	{
		min = 10000;
		max = 0;
		sum = 0;
		for (int i = n; i > 0; i--)
		{
			scanf("%d", &a);
			if (a > max) max = a;
			if (a < min) min = a;
			sum += a;
		}
		aver = (sum - min - max) / (n - 2);
		printf("%.2lf\n", aver);
	}
	return 0;
}