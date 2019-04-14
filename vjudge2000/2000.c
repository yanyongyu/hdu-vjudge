# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {char m=b;b=a;a=m;}

int main()
{
	char a, b, c;
	while (~scanf("%c%c%c%*c", &a, &b, &c))
	{
		if (a > b) swap(a, b);
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}