// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n;
	cin >> n;
	vector< vector<long double> >	p(n, vector<long double>(2));
	// vector<int>	r;
	rep (i, n) {
		long double	a, b;
		cin >> a >> b;
		p[i][0] = a / (a + b);
		p[i][1] = i;
	}
	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());
	int k = 0;
	rep (i, n) {
		// cout << i << ":p[i][1]:" << p[i][1] + 1 << endl;
		if (i != n - 1 && p[i][0] == p[i + 1][0]) {
			// cout << "  p[i][1]:" << p[i][1] + 1 << endl;
			k ++;
		} else {
			for (int j = 0; j <= k; j ++) {
				cout << p[i - j][1] + 1 << endl;
				// r[i + k] = p[i - k][1] + 1;
				// k --;
			}
			k = 0;
		}
	}
	// rep (i, n)
	// 	cout << r[i] << endl;
	return 0;
}
