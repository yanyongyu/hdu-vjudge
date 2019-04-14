# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int score;
	while (~scanf("%d", &score))
	{
		if (score > 100 || score < 0) printf("Score is error!\n");
		else if (score < 60) printf("E\n");
		else if (score < 70) printf("D\n");
		else if (score < 80) printf("C\n");
		else if (score < 90) printf("B\n");
		else printf("A\n");
	}
	return 0;
}