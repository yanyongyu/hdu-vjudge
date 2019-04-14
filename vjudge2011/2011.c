# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	double a, output;
	int case_, n;
	scanf("%d", &case_);
	for (; case_ > 0; case_--)
	{
		scanf("%d", &n);
		a = 1;
		output = 0;
		for (int i=1; n > 0; n--)
		{
			output += a * 1 / i;
			i++;
			a = -a;
		}
		printf("%.2lf\n", output);
	}
	return 0;
}