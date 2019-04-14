# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, x, a[110], j;
	while (~scanf("%d %d", &n, &x))
	{
		if ((n == 0) && (x == 0)) break;
		if (n == 0)
		{
			printf("%d\n", x);
			continue;
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (x >= a[i]) j = i + 1;
		}
		for (int i = n; i > j; i--)
		{
			a[i] = a[i - 1];
		}
		a[j] = x;
		printf("%d", a[0]);
		for (int i = 1; i <= n; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}