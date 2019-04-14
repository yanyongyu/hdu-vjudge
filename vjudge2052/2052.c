# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void line1(int a)
{
	printf("+");
	for (int i = 0; i < a; i++)
	{
		printf("-");
	}
	printf("+\n");
}

void line2(int a)
{
	printf("|");
	for (int i = 0; i < a; i++)
	{
		printf(" ");
	}
	printf("|\n");
}

int main()
{
	int a, b;
	while (~scanf("%d %d",&a,&b))
	{
		line1(a);
		for (int i = 0; i < b; i++)
		{
			line2(a);
		}
		line1(a);
		printf("\n");
	}
	return 0;
}