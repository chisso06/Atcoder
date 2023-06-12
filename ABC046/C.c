#include <stdio.h>

int	main() {
	int	n;
	size_t	t0, a0;
	size_t	t, a;
	size_t	c, c0, c1;

	scanf("%d", &n);
	scanf("%zu %zu", &t0, &a0);
	while (n-- - 1) {
		scanf("%zu %zu", &t, &a);
		c0 = t0 / t + (t0 % t > 0);
		c1 = a0 / a + (a0 % a > 0);
		if (c1 < c0)
			c = c0;
		else
			c = c1;
		t0 = t * c;
		a0 = a * c;
	}
	printf("%zu\n", t0 + a0);
	return 0;
}
