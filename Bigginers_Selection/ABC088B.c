#include <stdio.h>

int	main() {
	int	n;
	scanf("%d", &n);
	int	a[n];
	int	p[2]; // alice:0, bob:1
	int	turn = 0;

	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	p[0] = p[1] = 0;
	for (int i = 100; i > 0; i --) {
		for (int j = 0; j < n; j ++) {
			if (i == a[j]) {
				p[turn] += i;
				turn = (turn + 1) % 2;
			}
		}
	}
	printf("%d\n", p[0] - p[1]);
	return 0;
}