# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int f(int a)
{
	if (a >= 'A'&&a <= 'Z') {
		return a - 'A' + 1;
	}
	else if (a >= 'a'&&a <= 'z') {
		return -(a - 'a' + 1);
	}
	else return 0;
}

int main()
{
	int n, a;
	char c;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			scanf(" %c %d", &c, &a);
			printf("%d\n", a + f(c));
		}
	}
	return 0;
}