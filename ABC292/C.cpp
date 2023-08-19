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

/*
	ab = n
*/

int	main() {
	ll	n;
	ll	l, m;
	ll	n1, n2;
	ll	i1, i2;
	ll	count = 0;

	cin >> n;
	if (n == 1) {
		cout << 0 << endl;
		return 0;
	}
	for (ll i = 1; i < (double)n / 2; i ++) {
		l = m = 0;
		n1 = i;
		n2 = n - i;
		for (i1 = 1; i1 * i1 < n1; i1 ++) {
			if (n1 % i1 == 0)
				l ++;
		}
		l = l * 2 + (i1 * i1 == n1);
		for (i2 = 1; i2 * i2 < n2; i2 ++) {
			if (n2 % i2 == 0)
				m ++;
		}
		m = m * 2 + (i2 * i2 == n2);
		count += l * m;
	}
	count *= 2;
	if (n % 2 == 0) {
		l = 0;
		n1 = n / 2;
		for (i1 = 1; i1 * i1 < n1; i1 ++)
			if (n1 % i1 == 0)
				l ++;
		l = l * 2 + (i1 * i1 == n1);
		count += l * l;
	}
	cout << count << endl;
}

/*
	1 2 3 - 5 - | 7 - - - 11 - | 13 - - - 17 - | 19 -
*/

// ll	calc(ll n) {
// 	ll	result = 1;
// 	for (ll i = 2; n != 1;) {
// 		ll j = 1;
// 		while (n % i == 0) {
// 			n /= i;
// 			j ++;
// 		}
// 		result *= j;
// 		if (i == 2)
// 			i ++;
// 		else if (i == 3)
// 			i += 2;
// 		else if (i % 6 == 5)
// 			i += 2;
// 		else
// 			i += 4;
// 	}
// 	return result;
// }

// int	main() {
// 	ll	n;
// 	ll	count = 0;
// 	cin >> n;
// 	if (n == 1) {
// 		cout << 0 << endl;
// 		return 0;
// 	}
// 	for (ll i = 1; i < (double)n / 2; i ++) {
// 		count += calc(i) * calc(n - i);
// 	}
// 	count *= 2;
// 	if (n % 2 == 0) {
// 		int r = calc(n / 2);
// 		count += r * r;
// 	}
// 	cout << count << endl;
// 	return 0;
// }
