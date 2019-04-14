# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a, grade;
	while (~scanf("%d", &n))
	{
		grade = 1;
		for (; n > 0; n--)
		{
			scanf("%d", &a);
			if (a % 2 == 1) grade *= a;
		}
		printf("%d\n", grade);
	}
	return 0;
}