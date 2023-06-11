#include <stdio.h>

int	main() {
	size_t	n, k;
	scanf("%zu %zu", &n, &k);
	size_t	count = k;

	while (n-- - 1) {
		count *= k - 1;
	}
	printf("%zu\n", count);
	return 0;
}
