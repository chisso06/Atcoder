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
	ll	n, d;
	ll	s, t;
	int	f = -1;
	cin >> n >> d;
	cin >> s;
	rep (i, 0, n - 1) {
		cin >> t;
		if (f < 0 && t - s <= d)
			f = t;
		s = t;
	}
	cout << f << endl;
	return 0;
}
