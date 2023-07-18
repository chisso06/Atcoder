// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	h, w;
	cin >> h >> w;
	vector<string>	s(h);
	string	find = "snuke";
	vector<char>	next(127);
	vector<int>	dx = {-1, 0, 1, 0, 1, -1, 1, -1};
	vector<int>	dy = {0, -1, 0, 1, 1, -1, -1, 1};

	rep (i, h)
		cin >> s[i];
	next['s'] = 'n';
	next['n'] = 'u';
	next['u'] = 'k';
	next['k'] = 'e';
	rep (i, h) {
		rep (j, w) {
			if (s[i][j] == 's') {
				rep (d, 8) {
					rep (k, find.size()) {
						int ii = i + dx[d] * k;
						int jj = j + dy[d] * k;
						if (s[ii][jj] == 'e') {
							rep (l, find.size())
								cout << i + dx[d] * l + 1 << ' ' << j + dy[d] * l + 1 << endl;
							return 0;
						}
						if (!((ii + dx[d] >= 0 && ii + dx[d] < h && jj + dy[d] >= 0 && jj + dy[d] < w)
							&& s[ii + dx[d]][jj + dy[d]] == next[s[ii][jj]])) {
							break ;
						}
					}
				}
			}
		}
	}
	return 0;
}
