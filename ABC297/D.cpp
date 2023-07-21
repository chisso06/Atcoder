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
	ll	a, b;
	ll	count = 0;
	cin >> a >> b;
	while (a != b) {
		if (a > b) {
			if (a % b) {
				count += a / b;
				a = a % b;
			} else {
				count += a / b - 1;
				a = b;
			}
		} else {
			if (b % a) {
				count += b / a;
				b = b % a;
			} else {
				count += b / a - 1;
				b = a;
			}
		}
	}
	cout << count << endl;
	return 0;
}
