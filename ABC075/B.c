#include <stdio.h>

int	main() {
	int	h, w;
	int	count = 0;
	scanf("%d %d", &h, &w);
	char	t[h][w];

	for (int i = 0; i < h; i ++)
		scanf("%50s", t[i]);

	for (int i = 0; i < h; i ++) {
		for (int j = 0; j < w; j ++) {
			if (t[i][j] == '.') {
				for (int k = i - 1; k <= i + 1; k ++)
					for (int l = j - 1; l <= j + 1; l ++)
						if (0 <= k && k < h && 0 <= l && l < w && t[k][l] == '#')
							count ++;
				printf("%d", count);
				count = 0;
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}