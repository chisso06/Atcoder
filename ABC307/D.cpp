// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	roop(int s_i, int i, int &n, string &s) {
	if (i == n)
		return 0;
	if (s_i >= 0 && s[i] == ')') {
		s.erase(s.begin() + s_i, s.begin() + i + 1);
		n -= i - s_i + 1;
		return 1;
	} else if (s[i] == '(') {
		if (roop(i, i + 1, n, s))
			return roop(s_i, i, n, s);
		else
			return 0;
	} else {
		return roop(s_i, i + 1, n, s);
	}
}

int	main() {
	int	n;
	string s;
	cin >> n >> s;
	roop(-1, 0, n, s);
	cout << s << endl;
	return 0;
}
