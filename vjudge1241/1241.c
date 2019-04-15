# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int m, n;
int count;
int road[105][105];
char maze[105][105];
int turn[8][2] = { -1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1 };

void dfs(int i, int j)
{
	for (int x = 0; x < 8; x++)
	{
		int next_x = i + turn[x][0];
		int next_y = j + turn[x][1];
		if (next_x >= 1 && next_y >= 1 && next_x <= m && next_y <= n && maze[next_x][next_y] == '@')
		{
			maze[next_x][next_y] = '*';
			dfs(next_x, next_y);
		}
	}
}

int main()
{
	while (~scanf("%d%d%*c", &m, &n) && m != 0 && n != 0)
	{
		count = 0;
		memset(maze, '*', sizeof(maze));
		memset(road, 0, sizeof(road));
		for (int i = 1; i <= m; i++)
		{
			scanf("%[^\n]%*c", maze[i] + 1);
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (maze[i][j] == '@')
				{
					maze[i][j] == '*';
					count += 1;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}