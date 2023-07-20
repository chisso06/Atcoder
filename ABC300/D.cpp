// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

ll	n;
vector<ll>	p = {2, 3};

int	is_prime(ll n) {
	for (ll m : p)
		if (n % m == 0)
			return 0;
	return 1;
}

ll	judge(ll c) {
	ll	count = 0;
	if (p[0] * p[0] * p[1] * c * c > n)
		return -1;
	rep (i, 0, p.size()) {
		if (p[i] * p[i] * p[i + 1] * c * c > n)
			break ;
		rep (j, i + 1, p.size()) {
			if (p[i] * p[i] * p[j] * c * c > n)
				break ;
			if (p[i] * p[i] * p[j] * c * c <= n) {
				count ++;
			}
		}
	}
	return count;
}

int	main() {
	ll	count = 0;
	cin >> n;
	rep (i, 5, n) {
		if (is_prime(i)) {
			ll r = judge(i);
			if (r > 0)
				count += r;
			else if (r == -1)
				break ;
			p.push_back(i);
		}
	}
	cout << count << endl;
	return 0;
}
