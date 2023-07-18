// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int	a, b;
	cin >> a >> b;
	cout << (a % 3 != 0 && b - a == 1 ? "Yes" : "No") << endl;
	return 0;
}
