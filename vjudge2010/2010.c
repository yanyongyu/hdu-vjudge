# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int start, end, n, x[900], index;
	_Bool find;
	while (~scanf("%d %d", &start, &end))
	{
		find = 0;
		index = 0;
		for (n = start; n <= end; n++)
		{
			if ((n % 10)*(n % 10)*(n % 10) + ((n / 10) % 10)*((n / 10) % 10)*((n / 10) % 10) + ((n / 100) % 10)*((n / 100) % 10)*((n / 100) % 10) == n)
			{
				x[index] = n;
				index += 1;
				find = 1;
			}
		}
		if (!find) printf("no\n");
		else
		{
			printf("%d", x[0]);
			for (int i = 1; i < index; i++) printf(" %d", x[i]);
			printf("\n");
		}
	}
	return 0;
}