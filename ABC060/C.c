#include <stdio.h>

int	main() {
	int		n;
	size_t	t;
	size_t	t_i, p_t_i;
	size_t	result = 0;

	scanf("%d %zu", &n, &t);
	scanf("%zu", &p_t_i);
	while (n-- - 1) {
		scanf("%zu", &t_i);
		if (t_i - p_t_i >= t)
			result += t;
		else
			result += t_i - p_t_i;
		p_t_i = t_i;
	}
	printf("%zu\n", result + t);
	return 0;
}
