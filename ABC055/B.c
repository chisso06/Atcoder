#include <stdio.h>

#define D 1000000000 + 7

int	main() {
	size_t	n;
	size_t	p = 1;

	scanf("%zu", &n);
	for (size_t i = 1; i <= n; i ++) {
		p *= i;
		if (p > D)
			p %= D;
	}
	printf("%zu\n", p);
	return 0;
}