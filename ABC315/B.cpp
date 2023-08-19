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
	int	m;
	int	sum = 0;
	int	mid;
	cin >> m;
	vector<int>	d(m);
	rep (i, m) {
		cin >> d[i];
		sum += d[i];
	}
	if (sum == 1) {
		cout << 1 << ' ' << 1 << endl;
		return 0;
	}
	mid = (sum + 1) / 2;
	sum = 1;
	rep (i, m) {
		if (sum <= mid && mid < sum + d[i]) {
			cout << i + 1 << ' ' << mid - sum + 1 << endl;
			return 0;
		}
		sum += d[i];
	}
	return 0;
}
