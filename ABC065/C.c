#include <stdio.h>

int	main() {
	size_t	n, m;
	size_t	count = 1;
	scanf("%zu %zu", &n, &m);
	if ((n > m && n - m > 1) ||(m > n && m - n > 1)) {
		printf("0\n");
		return 0;
	}
	if (n == m)
		count = 2;
	while (n)
		count *= n--;
	while (m)
		count *= m--;
	printf("%zu\n", count);
	return 0;
}
