// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
using namespace std;

vector<int>	dx = {-1, 0, 1, 0};
vector<int>	dy = {1, 0, -1, 0};

ll	ll_abs(ll a, ll b) {
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int	main() {
	int	n;
	int	p;
	int	a;
	cin >> n >> p;
	while (n-- - 1) {
		cin >> a;
		if (a - p > 1)
			for (int i = p; i < a; i ++)
				cout << i << ' ';
		else if (p - a > 1)
			for (int i = p; i > a; i --)
				cout << i << ' ';
		else
			cout << p << ' ';
		p = a;
	}
	cout << p << endl;
	return 0;
}
