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
	string s;
	cin >> n >> s;
	int i = 0;
	while (s[i] != '|')
		i ++;
	i ++;
	while (s[i] != '|') {
		if (s[i] == '*') {
			cout << "in" << endl;
			return 0;
		}
		i ++;
	}
	cout << "out" << endl;
	return 0;
}
