#include <stdio.h>

int	main() {
	int	a, b;
	int	max;
	scanf("%d %d", &a, &b);
	max = a + b;
	if (max < a - b)
		max = a - b;
	if (max < a * b)
		max = a * b;
	printf("%d\n", max);
	return 0;
}

// 9:23