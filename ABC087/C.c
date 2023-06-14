#include <stdio.h>

int	candy_count(int a_i, int a_j, int n, int (*a)[n]) {
	static int	candy;
	int			max[2];
	int			f = 0;

	if (a_i == 1 && a_j == n - 1)
		return candy + a[a_i][a_j];
	candy += a[a_i][a_j];
	if (a_i == 0)
		max[0] = candy_count(a_i + 1, a_j, n, a);
	else
		f = 1;
	if (a_j < n - 1)
		max[1] = candy_count(a_i, a_j + 1, n, a);
	else
		f = 2;
	candy -= a[a_i][a_j];
	if (f)
		return max[f % 2];
	else if (max[0] > max[1])
		return max[0];
	else
		return max[1];
}

int	main() {
	int	n;
	scanf("%d", &n);
	int	a[2][n];

	for (int i = 0; i < 2; i ++)
		for (int j = 0; j < n; j ++)
			scanf("%d", &a[i][j]);
	printf("%d\n", candy_count(0, 0, n, a));
	return 0;
}
