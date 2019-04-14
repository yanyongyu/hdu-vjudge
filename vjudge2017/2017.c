# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int n, i, sum;
	char a=' ';
	scanf("%d%*c", &n);
	for (; n>0; n--)
	{
		sum = 0;
		while (~scanf("%c",&a))
		{
			if ((a == '0') || (a == '1') || (a == '2') || (a == '3') || (a == '4') || (a == '5') || (a == '6') || (a == '7') || (a == '8') || (a == '9')) sum += 1;
			if (a == '\n')
			{
				printf("%d\n", sum);
				break;
			}
		}
	}
	return 0;
}