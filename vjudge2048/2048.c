# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//´íÅÅÎÊÌâ

int main()
{
	int n, i, a, t;
	double sum;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		sum = 0.0;
		a = -1;
		if (n >= 10) n = 10;
		if (n == 1) a = 0;
		for (i = 2; i <= n; i++)
		{
			a *= i * (-1);
			sum += 1.0 / a;
		}
		printf("%0.2lf%%\n", floor(sum * 10000 + 0.5) / 100.0);
	}
	return 0;
}