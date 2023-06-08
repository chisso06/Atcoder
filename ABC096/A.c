#include <stdio.h>
#include <stdlib.h>

int	main() {
	int	a, b;

	if (scanf("%d %d", &a, &b) < 0)
		exit(1);
	printf("%d\n", a - (a > b));
	return 0;
}