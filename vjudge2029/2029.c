# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main()
{
	int n, flag;
	char a[1010];
	while (~scanf("%d", &n))
	{
		if (n == 0) break;
		for (; n > 0; n--)
		{
			scanf("%s", a);
			flag = 1;
			for (int i = 0; i < strlen(a); i++)
			{
				if (a[i] != a[strlen(a) - i - 1])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}