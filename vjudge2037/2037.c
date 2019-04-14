# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {int t=a;a=b;b=t;}

int a[105][2];
void sort(int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int temp = 0; temp < i; temp++)
		{
			if (a[i][1] < a[temp][1])
			{
				swap(a[i][0], a[temp][0]);
				swap(a[i][1], a[temp][1]);
			}
		}
	}
}

int main()
{
	int n, count, index;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &a[i][0], &a[i][1]);
		}
		sort(n);
		count = 1;
		index = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i][0] >= a[index][1])
			{
				count += 1;
				index = i;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}