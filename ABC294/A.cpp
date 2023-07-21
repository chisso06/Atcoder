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
	int	n;
	cin >> n;
	while (n--) {
		int	a;
		cin >> a;
		if (a % 2 == 0)
			cout << a << (n ? ' ' : '\n');
	}
	return 0;
}
