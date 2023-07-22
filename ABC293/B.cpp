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
	int	n;
	cin >> n;
	int	k = n;
	vector<int>	p(n);

	rep (i, n) {
		int	a;
		cin >> a;
		if (!p[i]) {
			if (!p[a - 1]) {
				p[a - 1] = 1;
				k --;
			}
		}
	}
	cout << k << endl;
	rep (i, n) {
		if (!p[i]) {
			cout << i + 1;
			if (--k == 0) {
				cout << endl;
				break ;
			} else {
				cout << ' ';
			}
		}
	}
	return 0;
}
