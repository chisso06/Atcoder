// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int h, w;
vector<char> n_s(127);
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};

int	roop(int i, int j, vector<string> s) {
	if (i == h - 1 && j == w - 1)
		return 1;
	if (!n_s[s[i][j]])
		return 0;
	char tmp = s[i][j];
	s[i][j] = ' ';
	rep (k, 4)
		if (i + dx[k] >= 0 && i + dx[k] < h && j + dy[k] >= 0 && j + dy[k] < w
			&& s[i + dx[k]][j + dy[k]] == n_s[tmp]
			&& roop(i + dx[k], j + dy[k], s))
				return 1;
	s[i][j] = tmp;
	return 0;
}

int	main() {
	cin >> h >> w;
	vector<string>	s(h);
	n_s['s'] = 'n';
	n_s['n'] = 'u';
	n_s['u'] = 'k';
	n_s['k'] = 'e';
	n_s['e'] = 's';
	rep (i, h)
		cin >> s[i];
	cout << (s[0][0] == 's' && roop(0, 0, s) ? "Yes" : "No") << endl;
	return 0;
}
