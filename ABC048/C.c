#include <stdio.h>

size_t	calc(int a_i, int n, size_t x, size_t *a) {
	static size_t	count;
	size_t			c[2];
	int				f_0 = 2;

	if (a_i == n - 2)
		return count;
	if (a[a_i] + a[a_i + 1] <= x)
		return (calc(a_i + 1, n, x, a));
	for (int i = 0; i < 2; i ++) {
		if (a[a_i + (i % 2)] != 0) {
			a[a_i + (i % 2)] --;
			count ++;
			c[i] = calc(a_i, n, x, a);
			count --;
			a[a_i + (i % 2)] ++;
		} else {
			f_0 = i;
		}
	}
	if (f_0 < 2)
		return c[!f_0];
	else if (c[0] <= c[1])
		return c[0];
	else
		return c[1];
}

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
	printf("%zu\n", min + calc(0, n, x, a));
	return 0;
}
