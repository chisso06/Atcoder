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
	int				h, w;
	cin >> h >> w;
	vector<string>	s(h);
	rep (i, 0, h) {
		cin >> s[i];
		rep (j, 0, w - 1) {
			if (s[i][j] == 'T' && s[i][j + 1] == 'T') {
				s[i][j] = 'P';
				s[i][j + 1] = 'C';
				j ++;
			}
		}
	}
	rep (i, 0, h)
		cout << s[i] << endl;
	return 0;
}
