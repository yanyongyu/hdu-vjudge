# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main()
{
	double x1, x2, y1, y2;
	double s;
	while (~scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2))
	{
		s = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		printf("%.2lf\n", s);
	}
	return 0;
}