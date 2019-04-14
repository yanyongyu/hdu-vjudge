# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

char maze[110][110];
int road[110][110];
int t, m, n;
int max_turn, start_x, start_y, end_x, end_y;
int turn[4][2] = { 0, 1, 1, 0, 0, -1, -1, 0 };

struct Node
{
	int x, y;
	int turn_num;
};

int bfs()
{
	queue <Node> que;
	Node q1;
	q1.x = start_x;
	q1.y = start_y;
	q1.turn_num = -1;
	que.push(q1);
	road[start_x][start_y] = 1;
	while (!que.empty())
	{
		Node q2 = que.front();
		que.pop();

		if (q2.x == end_x && q2.y == end_y && q2.turn_num <= max_turn) return 1;
		q1.turn_num = q2.turn_num + 1;
		for (int i = 0; i < 4; i++)
		{
			q1.x = q2.x + turn[i][0];
			q1.y = q2.y + turn[i][1];
			while (q1.x > 0 && q1.x <= m && q1.y > 0 && q1.y <= n && maze[q1.x][q1.y] == '.')
			{
				if (!road[q1.x][q1.y])
				{
					que.push(q1);
					road[q1.x][q1.y] = 1;
				}
				q1.x += turn[i][0];
				q1.y += turn[i][1];
			}
		}
	}
	return 0;
}

int main()
{
	scanf("%d", &t);
	for (int num = 0; num < t; num++)
	{
		scanf("%d%d%*c", &m, &n);
		memset(maze, '*', sizeof(maze));
		memset(road, 0, sizeof(road));
		for (int i = 1; i <= m; i++)
		{
			scanf("%[^\n]\n", maze[i] + 1);
		}
		scanf("%d%d%d%d%d", &max_turn, &start_y, &start_x, &end_y, &end_x);
		if (bfs()) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}