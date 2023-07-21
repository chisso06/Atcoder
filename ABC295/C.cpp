#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
// #define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	main() {
	int	n;
	int	count = 0;
	cin >> n;
	set<int>	socks;
	rep (i, 0, n) {
		int	a;
		cin >> a;
		if (socks.find(a) != socks.end()) {
			count ++;
			socks.erase(a);
		} else {
			socks.insert(a);
		}
	}
	cout << count << endl;
	return 0;
}
