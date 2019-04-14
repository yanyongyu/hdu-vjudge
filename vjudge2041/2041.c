# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int count(int n)
{
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else return count(n - 1) + count(n - 2);
}

int main()
{
	int n, m;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%d", &m);
			printf("%d\n", count(m-1));
		}
	}
}