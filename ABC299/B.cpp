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
	ll	n, t;
	int	flag = 0;
	int	m = 0;
	int	m_i;
	cin >> n >> t;
	vector<ll>	c(n);

	rep (i, 0, n) {
		cin >> c[i];
		if (t == c[i])
			flag = 1;
	}
	if (!flag)
		t = c[0];
	rep (i, 0, n) {
		ll	r;
		cin >> r;
		if (t == c[i]) {
			if (m < r) {
				m = r;
				m_i = i;
			}
		}
	}
	cout << m_i + 1 << endl;
	return 0;
}
