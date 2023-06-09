#include <stdio.h>

size_t	gcd(size_t x, size_t y) {
	if (!y)
		return x;
	return gcd(y, x % y);
}

int	main() {
	int		n;
	size_t	t, l = 1;

	scanf("%d", &n);
	while (n--) {
		scanf("%zu", &t);
		l *= t / gcd(l, t);
	}
	printf("%zu\n", l);
	return 0;
}