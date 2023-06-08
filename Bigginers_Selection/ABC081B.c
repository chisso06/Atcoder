#include <stdio.h>

int	main() {
	int		n;
	scanf("%d", &n);
	int		a[n];
	int		count = 0;

	for (int i = 0; i < n; i ++)
		scanf("%d", &a[i]);
	while (1) {
		for (int i = 0; i < n; i ++) {
			if (a[i] % 2) {
				printf("%d\n", count);
				return 0;
			}
			a[i] /= 2;
		}
		count ++;
	}
	return 0;
}