# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

struct note
{
	int x, y, t, s;
	note(int a, int b, int c, int d)
	{
		x = a;
		y = b;
		t = c;
		s = d;
	}
};
int st[10][10];
int mk[10][10];
int n, m, ex, ey, f, s;
int nx[4][2] = { 1,0,0,1,0,-1,-1,0 };

void bfs(int x, int y)
{
	int i;
	queue<note> qw;
	qw.push(note(x, y, 6, 0));
	while (!qw.empty())
	{
		note q = qw.front();
		qw.pop();
		for (i = 0; i < 4; i++)
		{
			int tx = q.x + nx[i][0];
			int ty = q.y + nx[i][1];
			if (tx == ex && ty == ey && q.t - 1 > 0)
			{
				f = 1;
				s = q.s + 1;
				return;
			}
			if (tx >= 0 && ty >= 0 && tx < n && ty < m && st[tx][ty] != 0 && q.t>1 && !mk[tx][ty])
			{
				if (st[tx][ty] == 4)
				{
					mk[tx][ty] = 1;
					qw.push(note(tx, ty, 6, q.s + 1));
				}
				else
					qw.push(note(tx, ty, q.t - 1, q.s + 1));
			}
		}
	}
	return;
}
int main()
{
	int t, i, j, sx, sy;
	scanf("%d", &t);
	while (t--)
	{
		memset(mk, 0, sizeof(mk));
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				scanf("%d", &st[i][j]);
				if (st[i][j] == 2)
				{
					sx = i, sy = j;
					mk[i][j] = 1;
				}
				if (st[i][j] == 3)
					ex = i, ey = j;
			}
		f = 0;
		bfs(sx, sy);
		if (!f)
			printf("-1\n");
		else
			printf("%d\n", s);
	}
	return 0;
}