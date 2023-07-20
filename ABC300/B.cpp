// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

vector<int>	dx = {-1, 0, 1, 0};
vector<int>	dy = {1, 0, -1, 0};

int	h, w;

int	main() {
	cin >> h >> w;
	vector<string>	a(h);
	vector<string>	b(h);
	rep (i, 0, h)
		cin >> a[i];
	rep (i, 0, h)
		cin >> b[i];
	rep (s, 0, h) {
		rep (t, 0, w) {
			// cout << "---(" << s << ", "<< t <<")---" << endl;
			int flag = 1;
			rep (i, 0, h - s) {
				if (!flag)
					break ;
				// cout << i + s << ": ";
				rep (j, 0, w - t) {
					// cout << a[i + s][j + t];
					if (b[i][j] != a[i + s][j + t]) {
						flag = 0;
						break ;
					}
				}
				rep (j, w - t, w) {
					// cout << a[i + s][j + t - w];
					if (b[i][j] != a[i + s][j + t - w]) {
						flag = 0;
						break ;
					}
				}
				// cout << endl;
			}
			rep (i, h - s, h) {
				if (!flag)
					break;
				// cout << i + s - h << ": ";
				rep (j, 0, w - t) {
					// cout << a[i + s - h][j + t];
					if (b[i][j] != a[i + s - h][j + t]) {
						flag = 0;
						break ;
					}
				}
				rep (j, w - t, w) {
					// cout << a[i + s - h][j + t - w];
					if (b[i][j] != a[i + s - h][j + t - w]) {
						flag = 0;
						break ;
					}
				}
				cout << endl;
			}
			if (flag) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
