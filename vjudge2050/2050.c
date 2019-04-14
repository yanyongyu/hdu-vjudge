# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%d", &a);
			printf("%d\n", 2 * a*a - a + 1);
		}
	}
	return 0;
}