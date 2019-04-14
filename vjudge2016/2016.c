# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {int t=a;a=b;b=t;}

int main()
{
	int n, a[110], min;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		min = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] < a[min]) min = i;
		}
		swap(a[min], a[0]);
		printf("%d", a[0]);
		for (int i = 1; i < n; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}