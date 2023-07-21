#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
// #define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

int	main() {
	set<string>	s = {"and", "not", "that", "the", "you"};
	int	n;
	int	f = 0;

	cin >> n;
	while (n--) {
		string	w;
		cin >> w;
		if (s.find(w) != s.end())
			f = 1;
	}
	cout << (f ? "Yes" : "No") << endl;
	return 0;
}
