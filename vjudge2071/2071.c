# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int i, n;
	double max, a;
	scanf("%d", &i);
	for (; i > 0; i--)
	{
		max = 0;
		scanf("%d", &n);
		for (; n > 0; n--)
		{
			scanf("%lf", &a);
			if (a > max) max = a;
		}
		printf("%.2lf\n", max);
	}
	return 0;
}