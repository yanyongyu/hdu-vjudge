# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	while (~scanf("%d%d", &a, &b))
	{
		if (a == 0 & b == 0) break;
		printf("%d\n", a + b);
	}
	return 0;
}