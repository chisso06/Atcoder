#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

ll	n, m;
ll	min_m;

int	roop(ll a, ll b1, ll b2) {
	if (b2 - b1 == 1) {
		min_m = min(min_m, a * b2);
		return 0;
	}
	ll	b3 = (b2 - b1 + 1) / 2 + b1;
	if (a * b3 == m) {
		min_m = m;
		return 1;
	} else if (a * b3 > m)
		return roop(a, b1, b3);
	else
		return roop(a, b3, b2);
}

int	main() {
	cin >> n >> m;
	min_m = n * n;
	rep (a, 1, n + 1) {
		if (a * a == m || a * n == m) {
			min_m = m;
			break ;
		} else if (a * a > m) {
			min_m = min(min_m, a * a);
			break ;
		} else if (a * n > m) {
			if (roop(a, a, n))
				break ;
		}
	}
	cout << (min_m >= m ? min_m : -1) << endl;
	return 0;
}
