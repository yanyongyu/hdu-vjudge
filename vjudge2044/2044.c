# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

long long a[55] = { 1,2 };

long long count(int n)
{
	for (int i = 2; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n-1];
}

int main()
{
	int n, start, end;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%d %d", &start, &end);
			printf("%lld\n", count(end - start));
		}
	}
	return 0;
}