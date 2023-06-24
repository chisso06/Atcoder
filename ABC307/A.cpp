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
	int	a[n * 7];
	int	b;
	rep(i, 7 * n)
		cin >> a[i];

	rep(i, n) {
		b = 0;
		rep(j, 7) {
			b += a[i * 7 + j];
		}
		cout << b;
		if (i == n - 1)
			cout << endl;
		else
			cout << ' ';
	}
	return 0;
}
