# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main()
{
	int m, n;
	double re, sum;
	while (~scanf("%d %d", &n, &m))
	{
		sum = 0;
		for (re = n; m > 0; m--)
		{
			sum += re;
			re = sqrt(re);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}