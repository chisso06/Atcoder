// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	ll	a, b;
	cin >> a >> b;
	cout << a / b + (a % b > 0) << endl;
	return 0;
}
