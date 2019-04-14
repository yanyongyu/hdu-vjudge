# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	long long s;
	int a, b;
	while (~scanf("%d %d", &a, &b))
	{
		if ((a == 0) && (b == 0)) break;
		s = 1;
		for (int i = 0; i < b; i++)
		{
			s = (s*a) % 1000;
		}
		printf("%lld\n", s);
	}
	return 0;
}