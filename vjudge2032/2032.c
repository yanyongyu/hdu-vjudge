# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void checkout(int i, int a[35], int b[35])
{
	if (i == 1)
	{
		b[0] = 1;
	}
	else if (i == 2)
	{
		b[0] = 1;
		b[1] = 1;
	}
	else
	{
		for (int n = 1; n < i - 1; n++)
		{
			b[n] = a[n - 1] + a[n];
			b[n + 1] = 1;
		}
	}
	printf("%d", b[0]);
	a[0] = b[0];
	for (int n = 1; n < i; n++)
	{
		printf(" %d", b[n]);
		a[n] = b[n];
	}
	printf("\n");
}

int main()
{
	int n, a[35], b[35];
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			checkout(i + 1, a, b);
		}
		printf("\n");
	}
	return 0;
}