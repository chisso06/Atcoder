// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
using namespace std;

int	main() {
	ll	n;
	cin >> n;
	vector<ll>	l(n + 1);

	l[0] = 2;
	l[1] = 1;
	rep(i, 2, n + 1)
		l[i] = l[i - 1] + l[i - 2];
	cout << l[n] << endl;
	return 0;
}
