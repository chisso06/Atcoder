#include <stdio.h>

int	main() {
	int	a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int	n[100];
	for (int i = 0; i < 100; i ++)
		n[i] = 0;
	for (int i = 0; i < 100; i ++) {
		if (n[i])
			break ;
		if (a * (i + 1) % b == c) {
			printf("YES\n");
			return 0;
		}
		n[i] = 1;
	}
	printf("NO\n");
	return 0;
}
