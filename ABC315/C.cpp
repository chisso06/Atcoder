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
	ll	n;
	ll	max1 = 0;
	ll	max2 = 0;
	cin >> n;
	vector< vector<ll> >	list(n, vector<ll>(2, 0));
	rep (i, n) {
		ll f, s;
		cin >> f >> s;
		f --;
		if (s >= list[f][1]) {
			list[f][0] = list[f][1];
			list[f][1] = s;
		} else if (s > list[f][0]) {
			list[f][0] = s;
		}
		if (max2 < (list[f][0] / 2) + list[f][1])
			max2 = (list[f][0] / 2) + list[f][1];
	}
	ll m1 = 0;
	ll m2 = 0;
	rep (i, n) {
		if (m2 < list[i][1]) {
			m1 = m2;
			m2 = list[i][1];
		} else if (m1 < list[i][1]) {
			m1 = list[i][1];
		}
	}
	max1 = m1 + m2;
	cout << max(max1, max2) << endl;
	return 0;
}
