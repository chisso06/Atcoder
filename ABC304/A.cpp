// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
using namespace std;

//13:46

int	main() {
	int	n;
	int	min = 1000000001;
	int	min_i = -1;
	cin >> n;
	vector<int>			s(n);
	vector<string>		a(n);

	rep(i, 0, n) {
		cin >> a[i] >> s[i];
		if (min > s[i]) {
			min = s[i];
			min_i = i;
		}
	}

	rep(i, min_i, n) {
		cout << a[i] << endl;
	}
	rep(i, 0, min_i) {
		cout << a[i] << endl;
	}
	return 0;
}

// 14:04