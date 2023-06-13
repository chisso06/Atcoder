#include <stdio.h>

int	main() {
	size_t	a, b, x;
	size_t	count = 0;

	scanf("%zu %zu %zu", &a, &b, &x);
	if (a > 0)
		printf("%zu\n", b / x - (a - 1) / x);
	else
		printf("%zu\n", b / x + 1);
	return 0;
}
