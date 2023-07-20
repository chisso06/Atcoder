#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	main() {
	int	n;
	int	m = 0;
	int	c = 0;
	int	flag = 0;
	string	s;
	cin >> n >> s;
	rep (i, 0, n) {
		if (s[i] == '-')
			flag = 1;
		if (s[i] == 'o')
			c ++;
		if (s[i] == '-' || i == n - 1) {
			m = max(m, c);
			c = 0;
		}
	}
	cout << (m && flag ? m : -1) << endl;
	return 0;
}
