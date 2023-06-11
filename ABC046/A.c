#include <stdio.h>

int	main() {
	int	a, b, c;
	int	count = 3;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b)
		count --;
	else if (a == c)
		count --;
	if (b == c)
		count --;
	printf("%d\n", count);
	return 0;
}
