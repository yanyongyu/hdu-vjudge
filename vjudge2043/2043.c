# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, flag1, flag2, flag3, flag4, count;
	char x;
	while (~scanf("%d%*c", &n))
	{
		for (; n > 0; n--)
		{
			flag1 = 0; flag2 = 0; flag3 = 0; flag4 = 0; x = ' ';
			for (count = 0; x != '\n'; count += 1)
			{
				scanf("%c", &x);
				if ((48 <= x) && (x <= 57)) flag3 = 1;
				else if ((65 <= x) && (x <= 90)) flag1 = 1;
				else if ((97 <= x) && (x <= 122)) flag2 = 1;
				else if ((x == '@') || (x == '#') || (x == '~') || (x == '!') || (x == '$') || (x == '%') || (x == '^')) flag4 = 1;
			}
			if ((count - 1 > 7) && (count - 1 < 17) && (flag1 + flag2 + flag3 + flag4 >= 3)) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}