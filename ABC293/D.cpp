#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i --)
#define v_find(list, value) find(list.begin(), list.end(), value)
#define v_sort(list) sort(list.begin(), sort.end())
using namespace std;

int	main() {
	int		n, m;
	int		a, c;
	int		r_i = 0;
	int		x, y;
	char	b, d;
	set<int>			r;
	vector< set<int> >	rope;

	cin >> n >> m;
	vector<int>			list(n, -1);

	x = y = 0;
	rep (i, m) {
		cin >> a >> b >> c >> d;
		a --;
		c --;
		if (list[a] < 0 && list[c] < 0) {
			list[a] = rope.size();
			list[c] = rope.size();
			rope.push_back({a, c});
			if (a == c)
				x ++;
		} else if (list[a] < 0) {
			list[a] = list[c];
			rope[list[a]].insert(a);
		} else if (list[c] < 0) {
			list[c] = list[a];
			rope[list[c]].insert(c);
		} else if (list[a] != list[c]) {
			const int	t = list[c];
			for (int r : rope[t])
				list[r] = list[a];
			rope[list[a]].merge(rope[t]);
		} else {
			x ++;
		}
	}

	rep (i, rope.size())
		if (rope[i].size())
			y ++;
	y -= x;
	rep (i, n)
		if (list[i] == -1)
			y ++;
	cout << x << ' ' << y << endl;
	return 0;
}

