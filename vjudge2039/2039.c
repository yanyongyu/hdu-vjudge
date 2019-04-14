# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	float a, b, c;
	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%f%f%f", &a, &b, &c);
			if ((a + b > c)&&(b + c > a)&&(a + c > b)) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}