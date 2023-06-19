#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
#define rep(i, n) for (int i = 0; i < n; i ++)
using namespace std;

int	main() {
	int							n;
	cin >> n;
	long long					sum = 0;
	vector<long long>			max_f(2);
	vector< vector<long long> >	f(n, vector<long long>(2));
	// vector< vector<long long> >	f(2, vector<long long>(n));

	rep(i, n + 1) {
		if (i < n) {
			cin >> f[i][0] >> f[i][1];
			if (!f[i][0] && f[i][1] > 0)
				sum += f[i][1];
		}
		if (i == n && f[n - 1][0] && f[n - 1][1] > 0)
			sum += max_f[1];
		else if ((i == n || (i && f[i][0])) && !f[i - 1][0])
			if (max_f[1] > 0 && max_f[0] + max_f[1] > 0)
				sum += max_f[1] + max_f[0] * (max_f[0] < 0);
		if (!i && !f[i][0])
			max_f[1] = 0;
		if (!i || (i < n && f[i][0] != f[i - 1][0]))
			max_f[f[i][0]] = f[i][1];
		else if (i < n)
			max_f[f[i][0]] = max(max_f[f[i][0]], f[i][1]);
	}
	cout << sum << endl;
	return 0;
}
