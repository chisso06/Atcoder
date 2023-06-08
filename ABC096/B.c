#include <stdio.h>
#include <stdlib.h>

int	main() {
	int	n[3];
	int	k;
	int	max = 0;
	int	max_i;

	if (scanf("%d %d %d", &n[0], &n[1], &n[2]) < 0 || scanf("%d", &k) < 0)
		exit(1);
	for (int i = 0; i < k; i ++) {
		for (int j = 0; j < 3; j ++) {
			if (max < n[j]) {
				max = n[j];
				max_i = j;
			}
		}
		n[max_i] *= 2;
	}
	printf("%d\n", n[0] + n[1] + n[2]);
	return 0;
}