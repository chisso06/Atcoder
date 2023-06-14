#include <stdio.h>

int	main() {
	int	n;
	scanf("%d", &n);
	int	a[n];
	int	a_i = 0;
	int	count = 0;
	int	tmp;

	for (int i = 0; i < n; i ++)
		scanf("%d", &a[i]);
	while (a_i != 1 && count >= 0) {
		if (!a[a_i])
			count = -1;
		else
			count ++;
		tmp = a[a_i];
		a[a_i] = 0;
		a_i = tmp - 1;
	}
	printf("%d\n", count);
	return 0;
}
