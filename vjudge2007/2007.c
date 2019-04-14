# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define swap(a,b) {long long t=a;a=b;b=t;}

int main()
{
	long long start, end;
	long long grade1, grade2;
	while (~scanf("%I64d %I64d", &start, &end))
	{
		if (start > end) swap(start, end);
		grade1 = 0;
		grade2 = 0;
		for (long long i = start; i <= end; i++)
		{
			if (i % 2 == 0) grade2 += i * i;
			else	grade1 += i * i * i;
		}
		printf("%I64d %I64d\n", grade2, grade1);
	}
	return 0;
}