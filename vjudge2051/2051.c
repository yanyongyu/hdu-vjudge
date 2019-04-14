# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main()
{
	int n;
	int a[12];
	while (~scanf("%d", &n))
	{
		int count = 0;
		for (; n > 0;count++)
		{
			a[count] = n % 2;
			n /= 2;
		}
		for (; count > 0; count--)
		{
			printf("%d", a[count-1]);
		}
		printf("\n");
	}
	return 0;
}