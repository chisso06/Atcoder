#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n) {
	if (n == 1)
		return 0;
	else if (n <= 3)
		return 1;
	else if (n % 2 == 0 || n % 3 == 0)
		return 0;
	for (int i = 5; i * i < n; i += (i % 6 == 1) * 4 + (i % 6 == 5) * 2) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int	judge_sum(int *a, int n) {
	for (int i = 0; i < n - 4; i ++) {
		for (int j = i + 1; j < n - 3; j ++) {
			for (int k = j + 1; k < n - 2; k ++) {
				for (int l = k + 1; l < n - 1; l ++) {
					for (int m = l + 1; m < n; m ++) {
						// printf("%d-%d-%d-%d-%d\n", a[i], a[j], a[k], a[l], a[m]);
						if (is_prime(a[i] + a[j] + a[k] + a[l] + a[m]))
							return 0;
					}
				}
			}
		}
	}
	return 1;
}

int	main() {
	int	n;
	int	m = 0;

	if (scanf("%d", &n) < 0)
		exit(1);
	int	a[n];
	for (int i = 2; i <= 55555 && m < n; i ++) {
		if (is_prime(i)) {
			a[m] = i;
			if (m < 4 || judge_sum(a, m + 1)) {
				if (m == n - 1) {
					for (int j = 0; j < n; j ++) {
						printf("%d", a[j]);
						if (j != n - 1)
							printf(" ");
					}
					printf("\n");
					return 0;
				}
				m ++;
			} else if (i == 55555) {
				m --;
				i = 1;
			}
		}
	}
	return 0;
}