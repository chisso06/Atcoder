// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	prev = 100;
	int	s;
	int	flag = 0;
	rep(i, 8) {
		cin >> s;
		if (!flag && (prev > s || s > 675 || s % 25)) {
			cout << "No" << endl;
			flag = 1;
		}
		prev = s;
	}
	if (!flag)
		cout << "Yes" << endl;
	return 0;
}
