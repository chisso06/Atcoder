// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

ll	ll_abs(ll a, ll b) {
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int	main() {
	int	n, m;
	ll	d;
	cin >> n >> m >> d;
	ll	x;
	ll	max = -1;
	set<ll>	a, b;

	rep (i, n) {
		cin >> x;
		a.insert(x);
	}
	rep (i, m) {
		cin >> x;
		b.insert(x);
	}
	while (max == -1 && a.size() && b.size()) {
		auto a_max = a.end();
		auto b_max = b.end();
		a_max--;
		b_max--;
		if (ll_abs(*a_max, *b_max) <= d)
			max = *a_max + *b_max;
		else if (*a_max > *b_max)
			a.erase(a_max);
		else
			b.erase(b_max);
	}
	cout << max << endl;
	return 0;
}
