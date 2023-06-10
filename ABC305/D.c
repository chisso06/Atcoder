#include <stdio.h>

int	main() {
	int		n, q;
	scanf("%d", &n);
	size_t	a[n + 1];
	size_t	l, r;
	size_t	b;

	for (int i = 0; i < n; i ++)
		scanf("%zu", &a[i]);
	scanf("%d", &q);
	while (q--) {
		scanf("%zu %zu", &l, &r);
		b = 0;
		for (int i = 2; i < n; i += 2) {
			if (r <= a[i - 1]) {
				break ;
			} else if (l < a[i] && a[i - 1] < r && i % 2 == 0) {
				b += a[i] - a[i - 1];
				if (a[i - 1] < l && l < a[i])
					b -= l - a[i - 1];
				if (a[i - 1] < r && r < a[i])
					b -= a[i] - r;
			}
		}
		printf("%zu\n", b);
	}
	return 0;
}
