# define _CRT_SECURE_NO_WARNINGS
# include <bits/stdc++.h>

using namespace std;

int s, n, m;
int road[105][105];
int min_step;

struct Node
{
	int s;
	int n;
	int m;
	int step;
	Node(int s_, int n_, int m_, int step_)
	{
		s = s_; n = n_; m = m_; step = step_;
	}
};

void bfs()
{
	queue <Node> q;
	q.push(Node(s, 0, 0, 0));
	memset(road, 0, sizeof(road));
	road[0][0] = 1;
	while (!q.empty())
	{
		Node now = q.front();
		Node next = Node(0, 0, 0, now.step + 1);
		q.pop();
		if ((now.s == 0 && now.n == now.m) || (now.n == 0 && now.s == now.m) || (now.m == 0 && now.s == now.n)) return;
		min_step = now.step;
		if (now.s > 0 && now.n < n)
		{
			next.s = (n - now.n > now.s) ? 0 : now.s + now.n - n;
			next.n = (n - now.n > now.s) ? now.s + now.n : n;
			next.m = now.m;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
		if (now.n > 0 && now.m < m)
		{
			next.n = (m - now.m > now.n) ? 0 : now.n + now.m - m;
			next.m = (m - now.m > now.n) ? now.n + now.m : m;
			next.s = now.s;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
		if (now.m > 0 && now.s < s)
		{
			next.m = (s - now.s > now.m) ? 0 : now.m + now.s - m;
			next.s = (s - now.s > now.m) ? now.m + now.s : m;
			next.n = now.n;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
		if (now.n > 0 && now.s < s)
		{
			next.n = (s - now.s > now.n) ? 0 : now.n + now.s - s;
			next.s = (s - now.s > now.n) ? now.n + now.s : s;
			next.m = now.m;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
		if (now.s > 0 && now.m < m)
		{
			next.s = (m - now.m > now.s) ? 0 : now.s + now.m - m;
			next.m = (m - now.m > now.s) ? now.s + now.m : m;
			next.n = now.n;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
		if (now.m > 0 && now.n < n)
		{
			next.m = (n - now.n > now.m) ? 0 : now.m + now.n - n;
			next.n = (n - now.n > now.m) ? now.m + now.n : n;
			next.s = now.s;
			if (!road[next.n][next.m]) q.push(next);
			road[next.n][next.m] = 1;
		}
	}
	min_step = 0;
}

int main()
{
	while (~scanf("%d%d%d", &s, &n, &m) && s != 0 && n != 0 && m != 0)
	{
		min_step = 0;
		if (s % 2)
		{
			printf("NO\n");
			continue;
		}
		bfs();
		if (!min_step) printf("NO\n");
		else printf("%d\n", min_step);
	}
	return 0;
}