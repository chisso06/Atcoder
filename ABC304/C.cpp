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
	if (i == n)
		return ;
	if (v[i]) {
		rep(j, list[i].size()) {
			if (list[i][j] > 0) {
				int	t = list[i][j];
				list[i].erase(list[i].begin() + j);
				v[t] = 1;
				inflection(t, n, v, list);
				j --;
			}
		}
	}
}

int	main() {
	int	n;
	int	d;
	cin >> n >> d;
	vector<int>	x(n), y(n);
	vector<int>	v(n);
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
