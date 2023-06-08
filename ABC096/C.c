#include <stdio.h>
#include <stdlib.h>

int	main() {
	int		h, w;
	if (scanf("%d %d", &h, &w) < 0)
		exit(1);
	char	map[h + 1][w + 1];

	for (int i = 0; i < h; i ++)
		if (scanf("%51s", map[i]) < 0)
			exit(1);
	for (int i = 0; i < h; i ++) {
		for (int j = 0; j < w; j ++) {
			if (map[i][j] == '#') {
				if (!(i > 0 && map[i - 1][j] == '#'
					  || i < h - 1 && map[i + 1][j] == '#'
					  || j > 0 && map[i][j - 1] == '#'
					  || j < w - 1 && map[i][j + 1] == '#')) {
					printf("No\n");
					return 0;
				}
			}
		}
	}
	printf("Yes\n");
	return 0;
}