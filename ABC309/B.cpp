// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n;
	char	t;
	cin >> n;
	vector< vector<char> >	a(n, vector<char>(n));

	rep (i, n)
		rep (j, n)
			cin >> a[i][j];
	t = a[0][0];
	rep (i, n - 1)
		swap(a[0][i + 1], t);
	rep (i, n - 1)
		swap(a[i + 1][n - 1], t);
	rep (i, n - 1)
		swap(a[n - 1][n - 1 - i - 1], t);
	rep (i, n - 1)
		swap(a[n - 1 - i - 1][0], t);
	rep (i, n) {
		rep (j, n)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}
