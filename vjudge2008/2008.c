# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, n1, n2, n3;
	float a;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		n1 = 0;
		n2 = 0;
		n3 = 0;
		for (; n > 0; n--)
		{
			scanf("%f", &a);
			if (a > 0) n3 += 1;
			else if (a == 0) n2 += 1;
			else n1 += 1;
		}
		printf("%d %d %d\n", n1, n2, n3);
	}
	return 0;
}