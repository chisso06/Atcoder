#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

void	roop(int a, int b) {
	int	c;
	if (b - a == 1) {
		cout << "! " << a << endl;
		return ;
	}
	cout << "? " << (b - a) / 2 + a << endl;
	cin >> c;
	if (c == 1)
		roop(a, (b - a) / 2 + a);
	else
		roop((b - a) / 2 + a, b);
}

int	main() {
	int	n;
	cin >> n;
	roop(1, n);
	return 0;
}
