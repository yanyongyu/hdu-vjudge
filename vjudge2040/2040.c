# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	long long a, b, suma, sumb;
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%lld %lld", &a, &b);
			suma = 0; sumb = 0;
			for (int i = 1; i < a; i++)
			{
				if (a%i == 0) suma += i;
			}
			if (suma != b)
			{
				printf("NO\n");
				continue;
			}
			for (int i = 1; i < b; i++)
			{
				if (b%i == 0) sumb += i;
			}
			if (sumb != a) printf("NO\n");
			else printf("YES\n");
		}
	}
}