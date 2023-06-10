#include <stdio.h>

int	main() {
	int		h, w;
	scanf("%d %d", &h, &w);
	char	g[h][w];

	for (int i = 0; i < h; i ++)
		scanf("%500s", g[i]);
	for (int i = 0; i < h; i ++) {
		for (int j = 0; j < w; j ++) {
			if (g[i][j] != '#') {
				for (int k = 0; k < 4; k ++) {
					if (!((i == 0 && k == 0) || (i == h - 1 && k == 2)
						|| (j == 0 && k == 1) || (j == w - 1 && k == 3))) {
						for (int l = k + 1; l < 4; l ++) {
							if (!((i == 0 && l == 0) || (i == h - 1 && l == 2)
								|| (j == 0 && l == 1) || (j == w - 1 && l == 3))) {
								if (g[i - (k == 0) + (k == 2)][j - (k == 1) + (k == 3)] == '#'
									&& g[i - (l == 0) + (l == 2)][j - (l == 1) + (l == 3)] == '#') {
									printf("%d %d\n", i + 1, j + 1);
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
