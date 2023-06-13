#include <stdio.h>

int	main() {
	int		n;
	size_t	x;
	size_t	min = 0;
	scanf("%d %zu", &n, &x);
	size_t	a[n];

	for (int i = 0; i < n; i ++)
		scanf("%zu", &a[i]);
	for (int i = 0; i < n; i ++) {
		if (a[i] > x) {
			min += a[i] - x;
			a[i] = x;
		}
	}
	for (int i = 0; i < n - 1; i ++) {
		if (a[i] + a[i + 1] > x) {
			min += a[i] + a[i + 1] - x;
			a[i + 1] = x - a[i];
		}
	}
	printf("%zu\n", min);
	return 0;
}
