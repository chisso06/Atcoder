#include <stdio.h>

int	main() {
	int	coin[3];
	int	x;
	int	count = 0;

	for (int i = 0; i < 3; i ++)
		scanf("%d", &coin[i]);
	scanf("%d", &x);
	for (int i = 0; i <= coin[0]; i ++) {
		if (i * 500 > x)
			break;
		else if (i * 500 == x)
			count ++;
		else {
			for (int j = 0; j <= coin[1]; j ++) {
				if (i * 500 + j * 100 > x)
					break;
				else if (i * 500 + j * 100 == x)
					count ++;
				else {
					for (int k = 0; k <= coin[2]; k ++) {
						if (i * 500 + j * 100 + k * 50 > x)
							break;
						else if (i * 500 + j * 100 + k * 50 == x)
							count ++;
					}
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}
