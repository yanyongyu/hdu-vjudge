# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

double abs(double n)
{
	if (n < 0) n = -n;
	return n;
}

int main()
{
	double n;
	while (~scanf("%lf", &n))
	{
		n = abs(n);
		printf("%.2lf\n", n);
	}
	return 0;
}