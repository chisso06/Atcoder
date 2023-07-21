#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

// TLE

int	main() {
	int	count = 0;
	string	s;
	cin >> s;
	vector< vector<int>	>	n(s.size() + 1, vector<int>(10));

	rep (i, 1, s.size() + 1) {
		n[i] = n[i - 1];
		n[i][s[i - 1] - '0'] ++;
		n[i][s[i - 1] - '0'] %= 2;
	}
	rep (i, 0, s.size() + 1) {
		rep (j, i + 2, s.size() + 1) {
			if (n[i] == n[j])
				count ++;
			j ++;
		}
	}
	cout << count << endl;
	return 0;
}
