#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
#define ll long long
#define MINIMUM -1000000000
#define rep(i, n) for (ll i = 0; i < n; i ++)
using namespace std;

int	main() {
	ll	n;
	cin >> n;
	vector< vector<ll> > dp(n + 1, vector<ll>(2));
	vector<ll>	x(n), y(n);

	rep(i, n + 1) {
		if (i < n)
			cin >> x[i] >> y[i];
		dp[i][0] = MINIMUM;
		dp[i][1] = MINIMUM;
	}
	dp[0][0] = 0;
	rep(i, n) {
		if (x[i] == 0)
			dp[i + 1][0] = max(dp[i][0], max(dp[i][0], dp[i][1]) + y[i]);
		else
			dp[i + 1][1] = max(dp[i][1], dp[i][0] + y[i]);
		dp[i + 1][!x[i]] = max(dp[i + 1][!x[i]], dp[i][!x[i]]);
	}
	cout << max(dp[n][0], dp[n][1]) << endl;
}