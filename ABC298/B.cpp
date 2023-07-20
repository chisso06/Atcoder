#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	n;

int	r_i(int i, int j, int r) {
	if (r == 0)
		return i;
	else if (r == 1)
		return (n - 1) + 1 - (j + 1);
	return r_i((n - 1) + 1 - (j + 1), i, r - 1);
}

int	r_j(int i, int j, int r) {
	if (r == 0)
		return j;
	if (r == 1)
		return i;
	return r_j((n - 1) + 1 - (j + 1), i, r - 1);
}

int	main() {
	cin >> n;
	vector< vector<int> >	a(n, vector<int>(n));
	vector< vector<int> >	b(n, vector<int>(n));
	rep (i, 0, n)
		rep (j, 0, n)
		cin >> a[i][j];
	rep (i, 0, n)
		rep (j, 0, n)
		cin >> b[i][j];
	rep (r, 0, 4) {
		// cout << "---" << r << "---" << endl;
		int	flag = 1;
		rep (i, 0, n) {
			if (!flag)
				break;
			rep (j, 0, n) {
				int ti = r_i(i, j, r);
				int tj = r_j(i, j, r);
				// cout << a[ti][tj] << ' ';
				if (a[ti][tj] == 1 && b[i][j] != a[ti][tj]) {
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
	cout << "No" << endl;
	return 0;
}
