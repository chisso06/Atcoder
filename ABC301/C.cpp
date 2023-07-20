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

string	atcoder = "atcoder";

int	main() {
	string	s;
	string	t;
	cin >> s >> t;
	vector<int>	count1(127), count2(127);

	rep (i, 0, s.size()) {
		count1[s[i]] ++;
		count2[t[i]] ++;
	}
	rep (c, 'a', 'z' + 1) {
		int	c1 = count1[c];
		int	c2 = count2[c];
		if (c1 != c2) {
			if (find(atcoder, c) != atcoder.end()) {
				if (c1 < c2 && count1['@'] - (c2 - c1) >= 0) {
					count1['@'] -= c2 - c1;
				} else if (c1 > c2 && count2['@'] - (c1 - c2) >= 0) {
					count2['@'] -= c1 - c2;
				} else {
					count1['@'] = -1;
					break ;
				}
			} else {
				count1['@'] = -1;
				break ;
			}
		}
	}
	cout << (count1['@'] == count2['@'] ? "Yes" : "No") << endl;
	return 0;
}
