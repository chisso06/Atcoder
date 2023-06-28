// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n, m;
	cin >> m >> n;
	int	a[n][m];
	vector< vector<int> >	p(m, vector<int>(m, 0));
	int	count = 0;

	rep(i, n) {
		cin >> a[i][0];
		rep(j, m - 1) {
			cin >> a[i][j + 1];
			p[a[i][j] - 1][a[i][j + 1] - 1] = 1;
			p[a[i][j + 1] - 1][a[i][j] - 1] = 1;
		}
	}
	rep(i, m) {
		for (int j = i + 1; j < m; j ++) {
			if (!p[i][j]) {
				count ++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
