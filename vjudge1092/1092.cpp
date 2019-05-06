# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int sum, n, a;
	while (~scanf("%d", &n), n != 0)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}