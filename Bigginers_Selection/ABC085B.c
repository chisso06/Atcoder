#include <stdio.h>

int	main() {
	int	n;
	scanf("%d", &n);
	int	d[n];
	int	count = 0;

	for (int i = 0; i < n; i ++) {
		scanf("%d", &d[i]);
	}
	for (int i = 100; i > 0; i --) {
		for (int j = 0; j < n; j ++) {
			if (i == d[j]) {
				count ++;
				break ;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}