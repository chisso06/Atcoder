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
	int	n, m;
	string	s;
	cin >> n >> m >> s;
	vector<int>	c(n);
	vector< vector<int> >	p(m, vector<int>());
	rep (i, n) {
		cin >> c[i];
		if (c[i] <= m)
			p[c[i] - 1].push_back(i);
	}
	rep (i, m) {
		char	tmp = s[p[i][p[i].size() - 1]];
		rrep (j, p[i].size()) {
			if (j == 0)
				s[p[i][j]] = tmp;
			else
				s[p[i][j]] = s[p[i][j - 1]];
		}
	}
	cout << s << endl;
	return 0;
}
