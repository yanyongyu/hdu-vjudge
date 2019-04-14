# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main()
{
	char a[110];
	int max, n;
	while (~scanf("%s",a))
	{
		n = 0;
		max = 0;
		for (;n < strlen(a); n++)
		{
			if (a[n] > max) max = a[n];
		}
		for (int i=0; i < n; i++)
		{
			printf("%c", a[i]);
			if (a[i] == max) printf("(max)");
		}
		printf("\n");
	}
	return 0;
}