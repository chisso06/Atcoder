#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i ++)
using namespace std;

int	main() {
	size_t	a[64];
	size_t	result = 0;
	size_t	e = 1;

	rep(i, 64) {
		cin >> a[i];
		result += a[i] * e;
		e *= 2;
	}
	cout << result << endl;
	return 0;
}
