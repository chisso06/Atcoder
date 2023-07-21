#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i --)
#define find(list, value) find(list.begin(), list.end(), value)
#define sort(list) sort(list.begin(), sort.end())
using namespace std;

int	main() {
	int	n, m;
	cin >> n >> m;
	vector< pair<int, int> >	a(n), b(m); // n, c_i

	rep (i, n)
		cin >> a[i].first;
	rep (i, m)
		cin >> b[i].first;
	int	a_i, b_i;
	a_i = b_i = 0;
	rep (c_i, n + m) {
		if (b_i == m || (a_i != n && a[a_i].first < b[b_i].first)) {
			a[a_i].second = c_i;
			// cout << a[a_i].second + 1 << ' ';
			a_i ++;
		} else {
			b[b_i].second = c_i;
			// cout << b[b_i].second + 1 << ' ';
			b_i ++;
		}
	}
	// cout << endl;
	rep (i, n)
		cout << a[i].second + 1 << (i != n - 1 ? ' ' : '\n');
	rep (i, m)
		cout << b[i].second + 1 << (i != m - 1 ? ' ' : '\n');
	return 0;
}
