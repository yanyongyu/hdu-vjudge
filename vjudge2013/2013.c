# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, sum;
	while (~scanf("%d", &n))
	{
		sum = 1;
		for (n--; n > 0; n--)
		{
			sum = (sum + 1) * 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}