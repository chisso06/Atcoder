#include <stdio.h>

int	main() {
	int	n;

	scanf("%d", &n);
	printf("%d\n", n * 800 - 200 * (n / 15));
	return 0;
}