#include <stdio.h>

int	main() {
	char	p, q;
	char	t;
	int		d[7] = {0, 3, 1, 4, 1, 5, 9};
	int		r = 0;

	scanf("%c %c", &p, &q);
	if (q < p) {
		t = p;
		p = q;
		q = t;
	}
	for (int i = p - 'A' + 1; i <= q - 'A'; i ++)
		r += d[i];
	printf("%d\n", r);
	return 0;
}
