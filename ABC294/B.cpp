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
	int	h, w;
	cin >> h >> w;
	rep (i, h) {
		rep (j, w) {
			int a;
			cin >> a;
			cout << (char)(a == 0 ? '.' : 'A' + a - 1);
			if (j == w - 1)
				cout << endl;
		}
	}
	return 0;
}
