#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
#define N 8
using namespace std;

int	main() {
	int	k;
	string	s;
	vector<int>	b(2, -1);
	vector<int>	r(2, -1);
	cin >> s;
	rep (i, 0, N) {
		if (s[i] == 'B') {
			if (b[0] < 0)
				b[0] = i;
			else
				b[1] = i;
		}
		if (s[i] == 'R') {
			if (r[0] < 0)
				r[0] = i;
			else
				r[1] = i;
		}
		if (s[i] == 'K')
			k = i;
	}
	cout << (b[0] % 2 != b[1] % 2 && r[0] < k && k < r[1] ? "Yes" : "No") << endl;
	return 0;
}
