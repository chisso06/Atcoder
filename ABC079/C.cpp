// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	string		s;
	cin >> s;
	int			n;
	char		op[2] = {'+', '-'};
	vector<int>	a(4);

	rep(i, 4)
		a[i] = s[i] - '0';
	rep(i, 2) {
		rep(j, 2) {
			rep(k, 2) {
				n = a[0]
					+ a[1] * ((int)(i == 0) - (int)(i == 1))
					+ a[2] * ((int)(j == 0) - (int)(j == 1))
					+ a[3] * ((int)(k == 0) - (int)(k == 1));
				if (n == 7) {
					cout << a[0] << op[i] << a[1] << op[j] << a[2] << op[k] << a[3] << "=7" << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
