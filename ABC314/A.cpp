#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i --)
#define v_find(list, value) find(list.begin(), list.end(), value)
#define v_sort(list) sort(list.begin(), list.end())
#define v_reverse(list) reverse(list.begin(), list.end())
using namespace std;

int	main() {
	string	pi = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	int		n;

	cin >> n;
	cout << "3.";
	rep (i, n)
		cout << pi[i];
	cout << endl;
	return 0;
}
