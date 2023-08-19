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
	vector<int>	last(2, -1);
	string	s;
	cin >> n >> s >> q;
	vector<int>	t(q), x(q);
	vector<char>	c(q);
	rep (i, q) {
		cin >> t[i] >> x[i] >> c[i];
		if (t[i] > 1) {
			last[0] = t[i];
			last[1] = i;
		}
	}
	rep (i, last[1]) {
		if (t[i] == 1)
			s[x[i] - 1] = c[i];
	}
	
	if (last[0] == 2) {
		for (char &d : s) {
			if ('A' <= d && d <= 'Z')
				d += 'a' - 'A';
		}
	} else if (last[0] == 3) {
		for (char &d : s) {
			if ('a' <= d && d <= 'z')
				d -= 'a' - 'A';
		}
	}
	for (int i = last[1] + 1; i < q; i ++) {
		if (t[i] == 1)
			s[x[i] - 1] = c[i];
	}
	cout << s << endl;
	return 0;
}
