# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

_Bool judge(int n)
{
	for (int i = 2; i < sqrt(n);i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}

int main()
{
	double start, end;
	int n, m;
	while (~scanf("%lf %lf", &start, &end))
	{
		if ((start == 0) && (end == 0)) break;
		m = 1;
		for (n = ceil(start); n < floor(end); n++)
		{
			if (!judge(n*n + n + 41)) m = 0;
		}
		if (m == 0) printf("Sorry\n");
		else printf("OK\n");
	}
	return 0;
}