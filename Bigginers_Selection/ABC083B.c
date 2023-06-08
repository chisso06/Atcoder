#include <stdio.h>

int	calc_n_sum(int n) {
	int	sum;

	sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int	main() {
	int	n;
	int	a, b;
	int	sum;
	int	n_sum;

	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	sum = 0;
	for (int i = 1; i <= n; i ++) {
		n_sum = calc_n_sum(i);
		if (a <= n_sum && n_sum <= b)
			sum += i;
	}
	printf("%d\n", sum);
	return 0;
}