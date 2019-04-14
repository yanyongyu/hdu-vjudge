# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {int t=a;a=b;b=t;}
# define abs(n) ((n<0)? -n:n)

void sort(int a[110], int n)
{
	for (int m = 1; m < n; m++)
	{
		for (int temp = 0; temp < m; temp++)
		{
			if (abs(a[m]) > abs(a[temp]))
			{
				swap(a[m], a[temp]);
			}
		}
	}
}


int main()
{
	int n, a[110];
	while (~scanf("%d", &n), n != 0)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a, n);
		printf("%d", a[0]);
		for (int i = 1; i < n; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}