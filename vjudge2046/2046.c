# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

long long a[53] = { 1 , 2 };
long long count(int n)
{
	for (int i = 2; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n - 1];
}

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		printf("%lld\n",count(n));
	}
	return 0;
}