// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	int n;
	int count = 0;
	set<string> list;
	cin >> n;
	string s;
	rep (i, n) {
		cin >> s;
		if (list.find(s) == list.end()) {
			count ++;
			list.insert(s);
			reverse(s.begin(), s.end());
			list.insert(s);
		}
	}
	cout << count << endl;
	return 0;
}
