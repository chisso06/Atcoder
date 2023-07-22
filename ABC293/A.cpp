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
	string	s;
	cin >> s;
	rep (i, s.size() / 2) {
		swap(s[2 * i], s[2 * i + 1]);
	}
	cout << s << endl;
	return 0;
}
