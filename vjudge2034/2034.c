# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {int t=a;a=b;b=t;}

int a[110], b[110], c[110];
void sort(int n)
{
	for (int x = 1; x < n; x++)
	{
		for (int temp = 0; temp < x; temp++)
		{
			if (c[x]<c[temp])
			{
				swap(c[x],c[temp]);
			}
		}
	}
}

int main()
{
	int n, m, index;
	while (~scanf("%d %d", &n, &m))
	{
		index = 0;
		if ((n == 0) && (m == 0)) break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &b[i]);
		}
		for (int i = 0; i < n; i++)
		{
			int flag = 1;
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				c[index] = a[i];
				index += 1;
			}
		}
		if (index == 0) printf("NULL\n");
		else
		{
			sort(index);
			for (int i = 0; i < index; i++) printf("%d ", c[i]);
			printf("\n");
		}
	}
	return 0;
}