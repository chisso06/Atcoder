#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	r, c;

void	bomb(int x1, int y1, vector<string> &b) {
	rep (x2, 0, r) {
		rep (y2, 0, c) {
			if (abs(x1 - x2) + abs(y1 - y2) <= b[x1][y1] - '0' && b[x2][y2] == '#')
				b[x2][y2] = '.';
		}
	}
}

int	main() {
	cin >> r >> c;
	vector<string>	b(r);
	rep (i, 0, r)
		cin >> b[i];
	rep (i, 0, r) {
		rep (j, 0, c) {
			if (b[i][j] >= '1' && b[i][j] <= '9') {
				bomb(i, j, b);
				b[i][j] = '.';
			}
		}
	}
	rep (i, 0, r) {
		rep (j, 0, c)
			cout << b[i][j];
		cout << endl;
	}
	return 0;
}
