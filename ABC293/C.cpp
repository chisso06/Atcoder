#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i --)
// #define find(list, value) find(list.begin(), list.end(), value)
#define sort(list) sort(list.begin(), sort.end())
using namespace std;

int	h, w;

int	roop(int i, int j, vector< vector<int> > a, set<int> list) {
	if (list.find(a[i][j]) != list.end())
		return 0;
	if (i == h - 1 && j == w - 1)
		return 1;
	list.insert(a[i][j]);

	int	c1, c2;
	c1 = c2 = 0;
	if (i < h - 1)
		c1 = roop(i + 1, j, a, list);
	if (j < w - 1)
		c2 = roop(i, j + 1, a, list);
	return c1 + c2;
}

int	main() {
	cin >> h >> w;
	vector< vector<int> >	a(h, vector<int>(w));
	set<int>				list;

	rep (i, h)
		rep (j, w)
			cin >> a[i][j];

	cout << roop(0, 0, a, list) << endl;
	return 0;
}
