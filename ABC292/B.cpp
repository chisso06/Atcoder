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
	int	n, q;
	cin >> n >> q;
	vector<int>	p(n);
	while (q--) {
		int c, x;
		cin >> c >> x;
		x --;
		if (c == 1) {
			p[x] ++;
		} else if (c == 2) {
			p[x] = 2;
		} else {
			cout << (p[x] >= 2 ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
