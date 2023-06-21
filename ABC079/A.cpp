// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	string s;
	cin >> s;

	if ((s[0] == s[1] || s[2] == s[3]) && s[1] == s[2])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
