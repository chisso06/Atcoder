// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	n;
int	m;
vector<int>	list(0);

int	judge(string a, string b) {
	int	count = 0;
	rep (i, a.size())
		if (a[i] != b[i])
			count ++;
	return (count == 1);
}

int	roop(int i, vector<string> s, vector<string> t) {
	if (i == n)
		return 1;
	rep (j, s.size()) {
		if (i == 0 || (find(list.begin(), list.end(), j) == list.end() && judge(t[i - 1], s[j]))) {
			t[i] = s[j];
			list.push_back(j);
			if (roop(i + 1, s, t))
				return 1;
			else
				list.pop_back();
		}
	}
	return 0;
}

int	main() {
	cin >> n >> m;
	vector<string>	s(n);
	vector<string>	t(n);
	rep (i, n)
		cin >> s[i];
	cout << (roop(0, s, t) ? "Yes" : "No") << endl;
	return 0;
}
