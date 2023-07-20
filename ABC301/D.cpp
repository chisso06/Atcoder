// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
// #include <cmath>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
using namespace std;

ll	n;
string max_s;
string result;
vector<int>	dx = {-1, 0, 1, 0};
vector<int>	dy = {1, 0, -1, 0};

ll	ll_abs(ll a, ll b) {
	if (a >= b)
		return a - b;
	else
		return b - a;
}

string	to_binary(ll n) {
	if (n == 0)
		return "0";
	else if (n == 1)
		return "1";
	return (to_binary(n / 2) + to_string(n % 2));
}

ll	to_hex(string s) {
	ll	e = 1;
	ll	n = 0;
	rep (i, 0, s.size()) {
		n += (s[s.size() - i - 1] - '0') * e;
		e *= 2;
	}
	return n;
}

int	roop(int i, int allone, string s) {
	if (i == s.size()) {
		if (allone)
			result = s;
		return allone;
	}
	if (s[i] != max_s[i]) {
		if (s[i] == '0') {
			return roop(i + 1, 1, s);
		} else if (s[i] == '1') {
			if (allone) {
				return roop(i + 1, allone, s);
			} else {
				return 0;
			}
		} else if (s[i] == '?') {
			if (allone) {
				s[i] = '1';
				return roop(i + 1, allone, s);
			} else if (max_s[i] == '0') {
				s[i] = '0';
				if (i == s.size() - 1)
					allone = 1;
				return roop(i + 1, allone, s);
			} else {
				s[i] = '1';
				if (i == s.size() - 1)
					allone = 1;
				if (roop(i + 1, allone, s)) {
					return 1;
				} else {
					s[i] = '0';
					return roop(i + 1, 1, s);
				}
			}
		}
	}
	if (i == s.size() - 1)
		allone = 1;
	return roop(i + 1, allone, s);
}

int	main() {
	string s;
	cin >> s >> n;
	max_s = to_binary(n);
	int	pre = s.size() - max_s.size();
	rep (i, 0, pre)
		max_s = "0" + max_s;
	pre = max_s.size() - s.size();
	rep (i, 0, pre)
		s = "0" + s;
	// cout << max_s << endl;
	// cout << s << endl;
	// if (roop(0, 0, s)) {
	// 	cout << s << endl;
	// 	cout << to_hex(s) << endl;
	// } else {
	// 	cout << -1 << endl;
	// }
	cout << (roop(0, 0, s) ? to_hex(result) : -1) << endl;
	return 0;
}
