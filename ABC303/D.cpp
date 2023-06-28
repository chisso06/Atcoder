// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	roop(int i, int lamp, int x, int y, int z, string s) {
	int	c;

	if (i == s.size())
		return 0;

	if (!lamp && s[i] == 'a' || lamp && s[i] == 'A') {
		c = min(roop(i + 1, lamp, x, y, z, s) + x, roop(i + 1, !lamp, x, y, z, s) + y + z);
	} else {
		c = min(roop(i + 1, lamp, x, y, z, s) + y, roop(i + 1, !lamp, x, y, z, s) + x + z);
	}
	return c;
}

int	main() {
	int	x, y, z;
	string	s;

	cin >> x >> y >> z >> s;
	cout << roop(0, 0, x, y, z, s) << endl;
	return 0;
}
