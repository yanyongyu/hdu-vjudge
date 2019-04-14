# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

long long a[2][43];
long long count(int n)
{
	a[0][0] = 1;
	a[1][0] = 2;
	for (int i = 1; i < n; i++)
	{
		a[0][i] = a[1][i - 1];
		a[1][i] = a[0][i - 1] * 2 + a[1][i - 1] * 2;
	}
	return a[0][n - 1] + a[1][n - 1];
}

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		printf("%lld\n", count(n));
	}
	return 0;
}