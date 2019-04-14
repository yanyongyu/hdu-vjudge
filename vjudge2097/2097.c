# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, sum10, sum12, sum16;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		sum10 = sum12 = sum16 = 0;
		for (int i = n; i != 0; i /= 10)
		{
			sum10 += i % 10;
		}
		for (int i = n; i != 0; i /= 12)
		{
			sum12 += i % 12;
		}
		for (int i = n; i != 0; i /= 16)
		{
			sum16 += i % 16;
		}
		if (sum10 == sum12 && sum10 == sum16) printf("%d is a Sky Number.\n", n);
		else printf("%d is not a Sky Number.\n", n);
	}
	return 0;
}