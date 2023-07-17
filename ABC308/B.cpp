// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n, m;
	int	p0;
	int	count = 0;
	cin >> n >> m;
	vector<int>	p(m);
	vector<string> c(n);
	vector<string>	d(m);
	rep (i, n)
		cin >> c[i];
	rep (i, m)
		cin >> d[i];
	cin >> p0;
	rep (i, m)
		cin >> p[i];
	rep (i, n) {
		int	d_i = find(d.begin(), d.end(), c[i]) - d.begin();
		if (d_i == d.end() - d.begin())
			count += p0;
		else
			count += p[d_i];
	}
	cout << count << endl;
	return 0;
}
