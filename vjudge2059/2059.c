# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define min(a,b) (a<b)?a:b

// 动态规划DP

int main()
{
	int N, i, j;
	double L, C, T, v1, v2, v3;
	double a[111], dp[111];
	while (scanf("%lf", &L) == 1)
	{
		scanf("%d%lf%lf", &N, &C, &T);
		scanf("%lf%lf%lf", &v1, &v2, &v3);
		for (i = 1; i <= N; i++)
			scanf("%lf", &a[i]);
		a[0] = dp[0] = 0.0;
		a[N + 1] = L;//加入起点和终点
		for (i = 1; i <= N + 1; i++)
		{
			double Min = 10000000.0;
			for (j = 0; j < i; j++)
			{
				double t, len = a[i] - a[j];
				if (len > C)
					t = C / v2 + (a[i] - a[j] - C) / v3;
				else
					t = (a[i] - a[j]) / v2;
				if (j)//起点不需要充电，故不用加T
					t += T;
				Min = min(Min, dp[j] + t);//取最小时间
			}
			dp[i] = Min;
		}
		if (L / v1 > dp[N + 1])
			printf("What a pity rabbit!\n");
		else
			printf("Good job,rabbit!\n");
	}
	return 0;
}