# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

long long a[2][35] = { {1},{0} };

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (n == -1) break;
		for (int i = 1; i < n + 1; i++)
		{
			a[0][i] = 3 * a[0][i - 1] + 2 * a[1][i - 1];
			a[1][i] = a[0][i - 1] + a[1][i - 1];
		}
		printf("%lld, %lld\n", a[0][n], a[1][n]);
	}
	return 0;
}