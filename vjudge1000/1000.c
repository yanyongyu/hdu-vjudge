# include <stdio.h>

int main()
{
	int a, b;
	while (scanf_s("%d%d", &a, &b))
	{
		printf("%d\n", a + b);
	}
	return 0;
}