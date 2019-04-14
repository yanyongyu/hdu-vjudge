# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int i, a, b;
	scanf("%d", &i);
	for (; i > 0; i--)
	{
		scanf("%d%d", &a, &b);
		if (a%b == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}