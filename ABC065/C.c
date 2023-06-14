#include <stdio.h>
#define D 1000000000 + 7

int	main() {
	size_t	n[2];
	size_t	count = 1;
	for (int i = 0; i < 2; i ++)
		scanf("%zu", &n[i]);
	for (int i = 0; i < 2; i ++) {
		if ((n[i] > n[!i] && n[i] - n[!i] > 1)) {
			printf("0\n");
			return 0;
		}
	}
	if (n[0] == n[1])
		count = 2;
	for (int i = 0; i < 2; i ++) {
		while (n[i]) {
			count *= n[i]--;
			if (count > D)
				count %= D;
		}
	}
	printf("%zu\n", count);
	return 0;
}
