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
	int			n, x;
	cin >> n;
	vector<int>	min(37, 40);
	vector<int>	min_n(37, 0);
	vector< vector< pair<int, int> > >	roulette(37, vector< pair <int, int> >());
	rep (i, n) {
		int	c, a;
		pair<int, int>	p;
		cin >> c;
		p.first = i;
		p.second = c;
		rep (j, c) {
			cin >> a;
			if (c < min[a]) {
				min[a] = c;
				min_n[a] = 1;
			} else if (c == min[a]) {
				min_n[a] ++;
			}
			roulette[a].push_back(p);
		}
	}
	cin >> x;
	cout << min_n[x] << endl;
	for (pair<int, int> r : roulette[x]) {
		if (r.second == min[x]) {
			cout << r.first + 1;
			min_n[x] --;
			if (min_n[x] > 0) {
				cout << ' ';
			} else {
				cout << endl;
				break ;
			}
		}
	}
	return 0;
}
