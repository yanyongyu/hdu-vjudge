# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main()
{
	int n, i, sum;
	char a[1010];
	while (~scanf("%d%*c", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			sum = 0;
			scanf("%[^\n]%*c", a);
			for (i = 0; i < strlen(a); i++)
			{
				if (a[i] < 0)
				{
					sum += 1;
					i++;
				}
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}