#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; i ++)
using namespace std;

int	main() {
	int						n;
	int						a;
	cin >> n;
	vector< vector<int> >	max_f(n, vector<int>(2));
	vector< vector<int> >	f(n, vector<int>());

	rep(i, 3 * n) {
		cin >> a;
		f.at(a - 1).push_back(i);
	}
	rep(i, n) {
		max_f[i][1] = i;
		if (f[i][0] < f[i][1] && f[i][1] < f[i][2])
			max_f[i][0] = f[i][1];
		else if (f[i][0] < f[i][2] && f[i][2] < f[i][1])
			max_f[i][0] = f[i][2];
		else
			max_f[i][0] = f[i][0];
	}
	sort(max_f.begin(),max_f.end());
	rep(i, n) {
		cout << max_f[i][1] + 1;
		if (i != n - 1)
			cout << ' ';
	}
	cout << endl;
	return 0;
}
