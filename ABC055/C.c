#include <stdio.h>

int	main() {
	size_t	n, m;
	size_t	result;

	scanf("%zu %zu", &n, &m);
	if (m <= 2 * n) {
		result = m / 2;
	} else {
		result = n + (m - n * 2) / 4;
	}
	printf("%zu\n", result);
	return 0;
}