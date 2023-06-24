// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	n;
	int	f;
	cin >> n;
	vector<string>	s(n);
	string	merge;

	rep(i, n)
		cin >> s[i];

	rep(i, n) {
		rep(j, n) {
			if (i != j) {
				merge = s[i] + s[j];
				f = 1;
				rep(k, merge.size() / 2) {
					if (merge[k] != merge[merge.size() - 1 - k]) {
						f = 0;
						break ;
					}
				}
				if (f) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
