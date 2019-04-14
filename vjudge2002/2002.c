# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define PI 3.1415927

int main()
{
	double r, v;
	while (~scanf("%lf", &r))
	{
		v = 4 / 3. * PI * r * r * r;
		printf("%.3lf\n", v);
	}
	return 0;
}