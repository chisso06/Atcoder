#include <stdio.h>
#include <stdlib.h>

int	main() {
	int	n;
	int	t0, x0, y0;
	int	t, x, y;
	int	able = 1;
	char result[2][4] = {"No", "Yes"};

	scanf("%d", &n);
	t0 = x0 = y0 = 0;
	for (int i = 0; i < n; i ++) {
		scanf("%d %d %d", &t, &x, &y);
		if (able 
			&& abs(x - x0) + abs(y - y0) <= (t - t0)
			&& (abs(x - x0) + abs(y - y0) - (t - t0)) % 2 == 0) {
				x0 = x;
				y0 = y;
				t0 = t;
		} else {
			able = 0;
		}
	}
	printf("%s\n", result[able]);
	return 0;
}