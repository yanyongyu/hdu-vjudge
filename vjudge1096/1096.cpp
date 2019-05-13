# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, num, sum, temp;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &num);
		sum = 0;
		for (int j = 0; j < num; j++)
		{
			scanf("%d", &temp);
			sum += temp;
		}
		printf("%d\n\n", sum);
	}
	scanf("%d", &num);
	sum = 0;
	for (int j = 0; j < num; j++)
	{
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d\n", sum);
	return 0;
}