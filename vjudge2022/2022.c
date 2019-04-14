# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define abs(n) ((n<0)? -n:n)

int main()
{
	int m, n, a, m0, n0, a0;
	while (~scanf("%d %d", &m, &n),((m!=0)&&(n!=0)))
	{
		a0 = 0;
		for (int i=0; i < m; i++)
		{
			for (int j=0; j < n; j++)
			{
				scanf("%d", &a);
				if (abs(a) > abs(a0))
				{
					a0 = a;
					m0 = i;
					n0 = j;
				}
			}
		}
		printf("%d %d %d\n", m0+1, n0+1, a0);
	}
	return 0;
}