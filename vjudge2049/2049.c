# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, a, b;
	long long sum, n_, y, m_;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%d %d", &a, &b);
			sum = 0;
			y = -1;
			n_ = 1;
			m_ = 1;
			for (int i = b; i > 1; i--)
			{
				n_ *= i;
			}
			for (int i = 2; i <= b; i++)
			{
				y *= i * (-1);
				sum += n_ / y;
			}
			for (int i = 0, x = a; i < b; i++, x--)
			{
				m_ *= x;
			}
			for (int i = b; i > 1; i--)
			{
				m_ /= i;
			}
			printf("%lld\n", sum*m_);
		}
	}
	return 0;
}