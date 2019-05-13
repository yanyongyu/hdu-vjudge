# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, sum, temp;
	while (~scanf("%d", &n))
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			sum += temp;
		}
		printf("%d\n", sum);
	}
	return 0;
}