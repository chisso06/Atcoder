// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n;
	ll	k, d;
	ll	sum = 0;
	cin >> n >> k;
	vector< vector<ll> >	ab(n, vector<ll>(2));

	rep (i, n) {
		cin >> ab[i][0] >> ab[i][1];
		sum += ab[i][1];
	}
	sort(ab.begin(), ab.end());
	if (sum <= k) {
		cout << 1 << endl;
		return 0;
	}
	for (int i = 0; i < n && sum > k;) {
		d = ab[i][0] + 1;
		while (i < n && d == ab[i][0] + 1) {
			sum -= ab[i][1];
			i ++;
		}
	}
	cout << d << endl;
	return 0;
}
