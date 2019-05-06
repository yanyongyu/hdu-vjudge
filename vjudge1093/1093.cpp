# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, j, a, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d", &j);
		for (int x = 0; x < j; x++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}