# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main()
{
	int m;
	while (~scanf("%d", &m))
	{
		long long step = 1;
		for (int i = 0; i < m; i++)
		{
			step *= 3;
		}
		printf("%lld\n", step - 1);
	}
	return 0;
}