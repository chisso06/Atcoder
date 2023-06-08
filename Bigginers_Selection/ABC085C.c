#include <stdio.h>

int	main() {
	int	n, y;

	scanf("%d %d", &n, &y);
	for (int i = 0; i * 10000 <= y && i <= n; i ++) {
		for (int j = 0; i * 10000 + j * 5000 <= y && i + j <= n; j ++) {
			if (i * 10000 + j * 5000 + (n - i - j) * 1000 == y) {
				printf("%d %d %d\n", i, j, n - i - j);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");
	return 0;
}