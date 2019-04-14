# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# define max(a,b) (a>b)?a:b
# define min(a,b) (a<b)?a:b

double x[10], y[10], ans, lx, rx, ly, ry;
int i;

void change(double *xx, double *yy)
{
	double t;
	t = *xx; *xx = *yy; *yy = t;
}

int main()
{
	while (~scanf("%lf%lf", &x[1], &y[1]))
	{
		for (i = 2; i <= 4; i++)
		{
			scanf("%lf%lf", &x[i], &y[i]);
		}
		if (x[1] > x[2]) change(&x[1], &x[2]);
		if (x[3] > x[4]) change(&x[4], &x[3]);
		if (y[1] > y[2]) change(&y[1], &y[2]);
		if (y[3] > y[4]) change(&y[4], &y[3]); //�����������ݡ�

		lx = max(x[1], x[3]); rx = min(x[2], x[4]); //����X���ϵ���˵Ľϴ�ֵ���Ҷ˵Ľ�Сֵ
		ly = max(y[1], y[3]); ry = min(y[2], y[4]); //����y���ϵ��¶˵Ľϴ�ֵ���϶˵Ľ�Сֵ
		if (lx <= rx && ly <= ry)	//�������ε���˲��ܳ����Ҷˣ��¶˲��ܳ��϶�
		{
			ans = 1.0*fabs(rx - lx)*fabs(ry - ly);   //�����
			printf("%.2lf\n", ans);
		}
		else
		{
			printf("0.00\n");	//û�й������䣬���0.00
			continue;
		}
	}
	return 0;
}