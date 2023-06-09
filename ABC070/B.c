#include <stdio.h>
#include <stdlib.h>

int	main() {
	int	a, b, c, d;
	int	s, e;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a < c)
		s = c;
	else
		s = a;
	if (b < d)
		e = b;
	else
		e = d;
	if (e - s > 0)
		printf("%d\n", e - s);
	else
		printf("0\n");
	return 0;
}