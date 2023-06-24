#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i ++)
using namespace std;

//14:35

int	d_xy(int x1, int y1, int x2, int y2) {
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

void	inflection(int i, int n, vector<int> &v, vector< vector<int> > list) {
	rep(j, list[i].size()) {
		if (!v[list[i][j]]) {
			v[list[i][j]] = 1;
			inflection(list[i][j], n, v, list);
		}
	}
}

int	main() {
	int	n;
	int	d;
	cin >> n >> d;
	vector<int>				x(n), y(n);
	vector<int>				v(n, 0);
	vector< vector<int> >	list(n, vector<int>());

	rep(i, n)
		cin >> x[i] >> y[i];
	rep(i, n)
		rep(j, n)
			if (i != j && d_xy(x[i], y[i], x[j], y[j]) <= d * d)
				list[i].push_back(j);
	v[0] = 1;
	inflection(0, n, v, list);
	rep(i, n) {
		if (v[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
