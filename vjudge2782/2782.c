# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int m, n, l, q, p, min, x2, y2;
char jj;
int a[1000][1000];

int dfs(int x, int y, int k, int f, int x1, int y1)
{
	int i, j, cc[4][2] = { {0,1},{-1,0},{1,0},{0,-1} }, xx, yy;
	int c[1000][2], top;
	if (min < k)
	{
		min = k;
		if (f == 0) jj = 'E';
		if (f == 1) jj = 'N';
		if (f == 2) jj = 'S';
		if (f == 3) jj = 'W';
		x2 = x1;
		y2 = y1;
	}
	if (k == (m*n - l))
	{
		q = 1;
		return 0;
	}
	for (i = 0; i < 4; i++)
	{
		if (x + cc[i][0] >= 0 && x + cc[i][0] < m&&y + cc[i][1] >= 0 && y + cc[i][1] < n)
			if (a[x + cc[i][0]][y + cc[i][1]] == 0)
			{
				j = 0; top = 0;
				xx = x + cc[i][0];
				yy = y + cc[i][1];
				while (xx >= 0 && xx < m&&yy >= 0 && yy < n)
				{

					if (a[xx][yy] == 1 || a[xx][yy] == 3) break;
					j++;
					c[top][0] = xx;
					c[top++][1] = yy;
					a[xx][yy] = 1;
					xx = xx + cc[i][0];
					yy = yy + cc[i][1];
				}
				xx = xx - cc[i][0];
				yy = yy - cc[i][1];
				if (k == 1) dfs(xx, yy, k + j, i, x1, y1);
				else dfs(xx, yy, k + j, f, x1, y1);
				if (q) return 0;
				while (top--)
				{
					a[c[top][0]][c[top][1]] = 0;
				}
			}
	}
	return 0;
}


int main()
{
	int i, z, x, y, t = 1, qq, pp;
	while (scanf("%d %d", &m, &n) && (m || n))
	{
		scanf("%d", &l);
		memset(a, 0, sizeof(a));
		for (i = 0; i < l; i++)
		{
			scanf("%d %d", &x, &y);
			a[x][y] = 3;
		}
		q = 0; min = 0;
		for (x = 0; x < m; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (a[x][y] == 0)
				{
					a[x][y] = 1;
					dfs(x, y, 1, 0, x, y);
					if (q)
						break;
					a[x][y] = 0;
				}
				if (q) break;
			}
		}
		printf("Case %d: %d %d %d %c\n", t++, min, x2, y2, jj);
	}
	return 0;
}
