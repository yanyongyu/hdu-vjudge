# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n;
	int h1, m1, s1, h2, m2, s2;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
			s1 += s2;
			if (s1 > 59)
			{
				s1 -= 60;
				m2 += 1;
			}
			m1 += m2;
			if (m1 > 59)
			{
				m1 -= 60;
				h2 += 1;
			}
			h1 += h2;
			printf("%d %d %d\n", h1, m1, s1);
		}
	}
	return 0;
}