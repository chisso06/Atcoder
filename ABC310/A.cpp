// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n, p, q;
	int	min;
	int	d;
	cin >> n >> p >> q;
	cin >> min;
	rep (i, n - 1) {
		cin >> d;
		if (min > d)
			min = d;
	}
	if (min + q < p)
		cout << min + q << endl;
	else
		cout << p << endl;
	return 0;
}
