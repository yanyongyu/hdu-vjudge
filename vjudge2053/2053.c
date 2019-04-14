# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		if ((int)sqrt(n)*(int)sqrt(n) == n) printf("1\n");
		else printf("0\n");
	}
	return 0;
}