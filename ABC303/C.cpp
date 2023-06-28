// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	move(int i, int x, int y, int n, int m, int h, int k, string s, vector<int> item_x, vector<int> item_y) {
	int	flag = 0;

	if (i == n)
		return 1;
	if (h < 0)
		return 0;
	rep(i, m)
		if (x == item_x[i] && y == item_y[i])
			flag = i;
	if (h < k && flag) {
		h = k;
		m --;
		item_x.erase(item_x.begin() + flag);
		item_y.erase(item_y.begin() + flag);
	}
	h --;
	if (s[i] == 'R' || s[i] == 'L')
		return move(i + 1, x + ((s[i] == 'R') - (s[i] == 'L')), y, n, m, h, k, s, item_x, item_y);
	else
		return move(i + 1, x, y + ((s[i] == 'U') - (s[i] == 'D')), n, m, h, k, s, item_x, item_y);
}

int	main() {
	int	n, m, h, k;
	// int	map[400001][400001];
	string	s;
	cin >> n >> m >> h >> k;
	cin >> s;
	vector<int>	x(m), y(m);

	rep(i, m) {
		cin >> x[i] >> y[i];
		// map[x + 200000][y + 200000] = 1;
	}
	if (move(0, 0, 0, n, m, h, k, s, x, y))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
