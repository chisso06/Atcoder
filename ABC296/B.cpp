#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	main() {
	char c;
	rep (i, 0, 8) {
		rep (j, 0, 8) {
			cin >> c;
			if (c == '*') {
				cout << (char)('a' + j) << 8 - i << endl;
			}
		}
	}
	return 0;
}
