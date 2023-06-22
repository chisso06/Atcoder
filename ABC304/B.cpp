// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i *= 10)
using namespace std;

//14:04

int	main() {
	int	n;
	cin >> n;
	if (n < 1000) {
		cout << n << endl;
		return 0;
	}
	rep(e, 1000, 1000000000) {
		if (e <= n && n < e * 10) {
			n -= n % (e / 100);
			cout << n << endl;
			return 0;
		}
	}
	return 0;
}

//14:10