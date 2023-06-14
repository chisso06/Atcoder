#include <stdio.h>

int	main() {
	size_t	x, a, b;
	scanf("%zu %zu %zu", &x, &a, &b);
	if (b > a + x)
		printf("dangerous\n");
	else if (b > a)
		printf("safe\n");
	else
		printf("delicious\n");
	return 0;
}
