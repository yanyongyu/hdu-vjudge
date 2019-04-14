# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, x, index;
	char a[1010];
	while (~scanf("%d %d", &n, &x))
	{
		index = 0;
		if (n < 0)
		{
			printf("-");
			n = -n;
		}
		for (; n != 0; index++)
		{
			if (n%x < 10) a[index] = n % x + 48;
			else a[index] = n % x - 10 + 65;
			n /= x;
		}
		for (; index > 0; index--)
		{
			printf("%c", a[index-1]);
		}
		printf("\n");
	}
	return 0;
}