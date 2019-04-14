# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// Éî¶ÈËÑË÷

int m, n, now_m, now_n;
char road[21][21];

int find(char road[21][21], int x, int y)
{
	int left = 0, right = 0, up = 0, down = 0;
	road[x][y] = '#';
	if (y - 1 > 0 && road[x][y-1] != '#')
	{
		left = find(road, x, y - 1);
	}
	if (x - 1 > 0 && road[x - 1][y] != '#')
	{
		up = find(road, x - 1, y);
	}
	if (y < n && road[x][y + 1] != '#')
	{
		right = find(road, x, y + 1);
	}
	if (x < m && road[x + 1][y] != '#')
	{
		down = find(road, x + 1, y);
	}
	return left + up + right + down + 1;
}

void input()
{
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%c", &road[i][j]);
			if (road[i][j] == '@')
			{
				now_m = i;
				now_n = j;
			}
		}
		scanf("%*C");
	}
}

int main()
{
	while (~scanf("%d%d%*c", &n, &m) && m != 0 && n != 0)
	{
		int output;
		input();
		output = find(road, now_m, now_n);
		printf("%d\n", output);
	}
	return 0;
}