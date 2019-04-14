# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

void test(long long m, long long xiangshu)
{
	long long shouxiang, sum = (2 * m / xiangshu);
	if ((sum + 1 - xiangshu) % 2 == 0)
	{
		shouxiang = (sum + 1 - xiangshu) / 2;
		printf("[%lld,%lld]\n", shouxiang, shouxiang + xiangshu - 1);
	}
}

int main()
{
	long long n, m;
	long long i;
	while (~scanf("%lld %lld", &n, &m))
	{
		if (n == 0 && m == 0) break;
		for (i = sqrt(2 * m); i > 0; i--)
		{
			if ((2 * m) % i == 0) test(m, i);
		}
		printf("\n");
	}
	return 0;
}