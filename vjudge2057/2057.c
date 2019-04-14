# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main()
{
	long long a, b, sum;
	while (~scanf("%llx %llx", &a, &b))
	{
		sum = a + b;
		if (sum < 0) printf("-%llX\n", -sum);
		else printf("%llX\n", sum);
	}
	return 0;
}