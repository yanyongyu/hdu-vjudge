# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void student(int n, int m, double a[51][6])
{
	double sum = 0;
	for (int j = 0; j < m; j++)
	{
		sum += a[0][j];
	}
	a[0][5] = sum / m;
	printf("%.2lf", a[0][5]);
	for (int i = 1; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += a[i][j];
		}
		a[i][5] = sum / m;
		printf(" %.2lf", a[i][5]);
	}
	printf("\n");
}

void project(int n, int m, double a[51][6])
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i][0];
	}
	a[50][0] = sum / n;
	printf("%.2lf", a[50][0]);
	for (int j = 1; j < m; j++)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i][j];
		}
		a[50][j] = sum / n;
		printf(" %.2lf", a[50][j]);
	}
	printf("\n");
}
void count(int n, int m, double a[51][6])
{
	int count=0;
	_Bool good;
	for (int i = 0; i < n; i++)
	{
		good = 1;
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < a[50][j])
			{
				good = 0;
				break;
			}
		}
		if (good) count += 1;
	}
	printf("%d\n\n", count);
}

int main()
{
	int n, m;
	double a[51][6];
	while (~scanf("%d %d", &n, &m),((n>0)&&(m>0)))
	{
		for (int j = 0; j < m; j++) scanf("%lf", &a[0][j]);
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < m; j++)	scanf("%lf", &a[i][j]);
		}
		student(n, m, a);
		project(n, m, a);
		count(n, m, a);
	}
	return 0;
}