// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	h, w;
vector<int>	dx = {1, 1, -1, -1};
vector<int>	dy = {1, -1, 1, -1};

int	cross_size(int x, int y, vector<string> c) {
	int	count[4];
	rep (d, 0, 4) {
		int	i = x;
		int	j = y;
		count[d] = 0;
		while (i + dx[d] >= 0 && i + dx[d] < h
			&& j + dy[d] >= 0 && j + dy[d] < w
			&& c[i + dx[d]][j + dy[d]] == '#') {
				i += dx[d];
				j += dy[d];
				count[d] ++;
		}
		if (d != 0 && count[d] != count[d - 1])
			return 0;
	}
	return count[0];
}

int	main() {
	cin >> h >> w;
	vector<string> c(h);
	vector<int> count(h + 1);
	rep (i, 0, h)
		cin >> c[i];
	rep (i, 0, h) {
		rep (j, 0, w) {
			if (c[i][j] == '#')
				count[cross_size(i, j, c)] ++;
		}
	}
	rep (i, 0, min(h, w)) {
		cout << count[i + 1];
		cout << (i != min(h , w) - 1 ? " " : "\n");
	}
	return 0;
}
