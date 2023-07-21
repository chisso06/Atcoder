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
	int	n, x;
	int	f = 0;
	cin >> n >> x;
	set<int>	plus;
	set<int>	minus;
	rep (i, 0, n) {
		int	a;
		cin >> a;
		if (!f) {
			if (a >= 0)
				plus.insert(a);
			else
				minus.insert(a);
			if (x - a <= 0) {
				if (plus.find(a - x) != plus.end())
					f = 1;
			} else {
				if (minus.find(a - x) != minus.end())
					f = 1;
			}
			if (!f) {
				if (x + a >= 0) {
					if (plus.find(x + a) != plus.end())
						f = 1;
				} else {
					if (minus.find(x + a) != minus.end())
						f = 1;
				}
			}
		}
	}
	cout << (f ? "Yes" : "No") << endl;
	return 0;
}
