#include <stdio.h>
#include <string.h>

int	check(int n, int m, int *a, int *b, int *p, int next) {
	int	ta, tb;
	int	r = 0;
	for (int i = 0; p[i]; i ++)
		if (i == n - 1)
			return 1;
	for (int i = 0; i < m; i ++) {
		if (a[i] == next || b[i] == next) {
			p[a[i] - 1] = 1;
			p[b[i] - 1] = 1;
			ta = a[i];
			tb = b[i];
			a[i] = 0;
			b[i] = 0;
			if ((ta == next && check(n, m, a, b, p, tb))
				|| (tb == next && check(n, m, a, b, p, ta)))
				r = 1;
			a[i] = ta;
			b[i] = tb;
			if (r)
				return 1;
		}
	}
	return 0;
}

int	main() {
	int	n, m;
	int	count = 0;
	int	ta, tb;
	if (scanf("%d %d", &n, &m) < 0)
		return 0;
	int	a[m], b[m];
	int	p[n];

	for (int i = 0; i < m; i++) {
		if (scanf("%d %d", &a[i], &b[i]) < 0)
			return 0;
	}
	for (int i = 0; i < m; i++) {
		ta = a[i];
		tb = b[i];
		a[i] = b[i] = 0;
		memset(p, 0, n);
		if (!check(n, m, a, b, p, 1))
			count ++;
		a[i] = ta;
		b[i] = tb;
	}
	printf("%d\n", count);
	return 0;
}