# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, m, a, e, i, o, u;
	char x[110];
	while (~scanf("%d%*c", &n))
	{
		if (n == 0) break;
		m = 0; a = 0; e = 0; i = 0; o = 0; u = 0;
		while (~scanf("%c", &x[m]), x[m] != '\n')
		{
			if (x[m] == 'a') a += 1;
			else if (x[m] == 'e') e += 1;
			else if (x[m] == 'i') i += 1;
			else if (x[m] == 'o') o += 1;
			else if (x[m] == 'u') u += 1;
			m += 1;
		}
		printf("a:%d\n", a);
		printf("e:%d\n", e);
		printf("i:%d\n", i);
		printf("o:%d\n", o);
		printf("u:%d\n", u);
		for (; n > 1; n--)
		{
			printf("\n");
			m = 0; a = 0; e = 0; i = 0; o = 0; u = 0;
			while (~scanf("%c", &x[m]))
			{
				if (x[m] == '\n') break;
				if (x[m] == 'a') a += 1;
				else if (x[m] == 'e') e += 1;
				else if (x[m] == 'i') i += 1;
				else if (x[m] == 'o') o += 1;
				else if (x[m] == 'u') u += 1;
			}
			printf("a:%d\n", a);
			printf("e:%d\n", e);
			printf("i:%d\n", i);
			printf("o:%d\n", o);
			printf("u:%d\n", u);
		}
	}
	return 0;
}