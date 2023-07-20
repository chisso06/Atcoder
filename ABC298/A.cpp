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
	int	flag = 0;
	cin >> n;
	while (n --) {
		char	c;
		cin >> c;
		if (!flag && c == 'o')
			flag = 1;
		else if (c == 'x')
			flag = -1;
	}
	cout << (flag > 0 ? "Yes" : "No") << endl;
	return 0;
}
