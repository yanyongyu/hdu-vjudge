# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

char a[100000], b[100000];

void process(char a[])
{
	int i, len, dot = -1;

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] == '.')
		{
			dot = i;
			break;
		}
	}
	if (dot >= 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			if (a[i] != '0')
				break;
			else
			{
				a[i] = '\0';
				len--;
			}
		}
		if (a[len-1] == '.')
			a[len-1] = '\0';
	}
}

int main()
{
	while (~scanf("%s %s", a, b))
	{
		process(a);
		process(b);
		if (strcmp(a, b))
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}