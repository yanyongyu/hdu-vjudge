# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	char a[13];
	int i;
	scanf("%d", &i);
	for (; i > 0; i--)
	{
		scanf("%s", a);
		printf("6%c%c%c%c%c\n", a[6], a[7], a[8], a[9], a[10]);
	}

	return 0;
}