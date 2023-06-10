#include <stdio.h>

int	main() {
	int	n;
	int	p, a;

	scanf("%d", &n);
	if (n % 5 < 3)
		printf("%d\n", n - n % 5);
	else
		printf("%d\n", n + 5 - n % 5);
	return 0;
}