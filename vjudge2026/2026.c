# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main()
{
	char a[110];
	int i = 0;
	while (~scanf("%c", &a[i]))
	{
		if (a[i] == '\n')
		{
			for (int n = 0; n < i; n++)
			{
				if (n == 0) a[n] -= 32;
				else if (a[n] == ' ') a[n + 1] -= 32;
			}
			for (int n = 0; n < i; n++)
			{
				printf("%c", a[n]);
			}
			i = 0;
			printf("\n");
		}
		else
		{
			i += 1;
			continue;
		}
	}
	return 0;
}