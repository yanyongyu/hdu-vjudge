# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int year, month, day, n;
	while (~scanf("%d/%d/%d", &year, &month, &day))
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			if (month == 1) n = day;
			else if (month == 2) n = day + 31;
			else if (month == 3) n = day + 31 + 29;
			else if (month == 4) n = day + 31 + 29 + 31;
			else if (month == 5) n = day + 31 + 29 + 31 + 30;
			else if (month == 6) n = day + 31 + 29 + 31 + 30 + 31;
			else if (month == 7) n = day + 31 + 29 + 31 + 30 + 31 + 30;
			else if (month == 8) n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
			else if (month == 9) n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
			else if (month == 10) n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			else if (month == 11) n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			else if (month == 12) n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		}
		else
		{
			if (month == 1) n = day;
			else if (month == 2) n = day + 31;
			else if (month == 3) n = day + 31 + 28;
			else if (month == 4) n = day + 31 + 28 + 31;
			else if (month == 5) n = day + 31 + 28 + 31 + 30;
			else if (month == 6) n = day + 31 + 28 + 31 + 30 + 31;
			else if (month == 7) n = day + 31 + 28 + 31 + 30 + 31 + 30;
			else if (month == 8) n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
			else if (month == 9) n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
			else if (month == 10) n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			else if (month == 11) n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			else if (month == 12) n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		}
		printf("%d\n", n);
	}
	return 0;
}