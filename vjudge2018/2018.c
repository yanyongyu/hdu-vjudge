# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int count(int n)
{
	if (n <= 4) return n;
	else return count(n - 1) + count(n - 3);
}

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		printf("%d\n", count(n));
	}
	return 0;
}