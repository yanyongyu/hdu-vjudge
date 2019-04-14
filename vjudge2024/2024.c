# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, count;
	char a;
	_Bool is;
	while (~scanf("%d%*c", &n))
	{
		if (n <= 0) break;
		for (; n > 0; n--)
		{
			count = 0;
			is = 1;
			while (~scanf("%c", &a))
			{
				if (a == '\n') break;
				count += 1;
				if (count == 1)
				{
					if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)) || (a == 95)) continue;
					else
					{
						is = 0;
					}
				}
				else
				{
					if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)) || (a == 95) || ((a >= 48) && (a <= 57))) continue;
					else
					{
						is = 0;
					}
				}
			}
			if (is == 0) printf("no\n");
			else printf("yes\n");
		}
	}
	return 0;
}