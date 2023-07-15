// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int n, m;
	int	f1 = 0;
	cin >> n >> m;
	vector<int> p(n), c(n);
	vector< vector<int> > f(n, vector<int>(0));
	rep (i, n) {
		cin >> p[i] >> c[i];
		rep (j, c[i]) {
			int	f_j;
			cin >> f_j;
			f[i].push_back(f_j);
		}
	}
	rep (i, n) {
		rep (j, n) {
			if (i != j && p[i] >= p[j]) {
				int f2 = 0;
				rep (k, c[i]) {
					if (find(f[j].begin(), f[j].end(), f[i][k]) == f[j].end()) {
						f2 = 1;
						break ;
					}
				}
				if (!f2) {
					if (p[i] > p[j]) {
						f1 = 1;
					} else {
						rep (k, c[j]) {
							if (find(f[i].begin(), f[i].end(), f[j][k]) == f[i].end()) {
								f1 = 1;
								break ;
							}
						}
					}
					if (f1) {
						// cout << i << ' ' << j << endl;
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
