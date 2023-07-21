#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

// TLE

int	main() {
	int			n, k;
	cin >> n >> k;
	vector<int>	a(n);
	set<int>	price;
	rep (i, 0, n) {
		cin >> a[i];
		set<int>	tmp;
		price.insert(a[i]);
		for (int p : price) {
			tmp.insert(a[i] + p);
		}
		price.merge(tmp);
	}

	auto itr = price.begin();
	rep (i, 0, k - 1) {
		itr ++;
	}
	cout << *itr << endl;
	return 0;
}
