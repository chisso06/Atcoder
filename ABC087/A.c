#include <stdio.h>

int	main() {
	int	x, a, b;
	scanf("%d", &x);
	scanf("%d", &a);
	scanf("%d", &b);

	x -= a;
	while (x / b)
		x -= b;
	printf("%d\n", x);
	return 0;
}
