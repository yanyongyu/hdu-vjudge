# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <cstdio>

using namespace std;

char map[10][10];
int num;
int flag;
int move_;
int dir[4][2] = { {-1,0},{0,-1},{0,1},{1,0} }; //U¡¢L¡¢R¡¢D 
char tow[4] = { 'U','L','R','D' };

struct node
{
	int x, y;
	int direction;
}path[15];

int is_in(int x, int y)
{
	if (x >= 0 && x <= 6 && y >= 0 && y <= 7)
		return 1;
	else
		return 0;
}

void dfs(int cur)
{
	if (cur == num)
	{
		flag = 1;
		return;
	}

	for (int i = 0; i <= 6; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			if (map[i][j] == 'O')
			{
				move_ = 0;
				for (int d = 0; d < 4; d++)
				{
					int nx = i + dir[d][0];
					int ny = j + dir[d][1];
					if (is_in(nx, ny) && map[nx][ny] == 'O') continue;

					while (is_in(nx, ny))
					{
						nx += dir[d][0];
						ny += dir[d][1];

						if (map[nx][ny] == 'O')
						{
							move_ = 1;
							map[nx][ny] = 'X';
							map[nx - dir[d][0]][ny - dir[d][1]] = 'O';
						}
					}

					if (move_)
					{
						map[i][j] = 'X';
						path[cur].x = i;
						path[cur].y = j;
						path[cur].direction = d;

						dfs(cur + 1);

						if (flag == 1) return;
 
						nx -= dir[d][0];
						ny -= dir[d][1];
						while (nx != i || ny != j)
						{
							if (map[nx][ny] == 'O')
							{
								map[nx][ny] = 'X';
								map[nx + dir[d][0]][ny + dir[d][1]] = 'O';
							}
							nx -= dir[d][0];
							ny -= dir[d][1];
						}
						map[i][j] = 'O';
					}
				}
			}
		}
	}
}

int main()
{
	int kase = 1;
	while (~scanf("%s", map[0]))
	{
		num = flag = 0;
		for (int i = 1; i <= 6; i++)
		{
			scanf("%s", map[i]);
		}

		for (int i = 0; i <= 6; i++)
		{
			for (int j = 0; j <= 7; j++)
			{
				if (map[i][j] == 'O')
				{
					num++;
				}
			}
		}

		dfs(1);

		if (kase != 1) cout << endl;
		cout << "CASE #" << kase++ << ":" << endl;
		for (int i = 1; i <= num - 1; i++)
		{
			cout << path[i].x << " " << path[i].y << " " << tow[path[i].direction] << endl;
		}
	}
	return 0;
}