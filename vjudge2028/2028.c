# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, a[110], max;
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		max = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] > max) max = a[i];
		}
		for (int i = max;; i++)
		{
			int flag = 1;
			for (int j = 0; j < n; j++)
			{
				if (i%a[j] != 0) flag = 0;
			}
			if (flag == 1)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}