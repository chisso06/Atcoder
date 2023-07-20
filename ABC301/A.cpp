// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
using namespace std;

vector<int>	dx = {-1, 0, 1, 0};
vector<int>	dy = {1, 0, -1, 0};

ll	ll_abs(ll a, ll b) {
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int	main() {
	int	n;
	int	win = 0;
	int	t_i, a_i;
	string	s;
	cin >> n >> s;
	rep (i, 0, n) {
		win += (s[i] == 'T') - (s[i] == 'A');
		t_i = i * (s[i] == 'T');
		a_i = i * (s[i] == 'A');
	}
	if (!win)
		cout << (char)('T' * (t_i < a_i) + (char)'A' * (a_i < t_i)) << endl;
	else if (win > 0)
		cout << 'T' << endl;
	else if (win < 0)
		cout << 'A' << endl;
	return 0;
}
