#include <stdio.h>

int	main() {
	char	n[4];
	int		count;

	scanf("%3s", n);
	count = 0;
	for (int i = 0; n[i]; i ++) {
		if (n[i] == '1')
			count ++;
	}
	printf("%d\n", count);
	return 0;
}