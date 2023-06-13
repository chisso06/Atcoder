#include <stdio.h>
#include <string.h>

int	main() {
	char	a[11];
	char	b[11];
	char	c[11];
	scanf("%10s %10s %10s", a, b, c);
	if (a[strlen(a) - 1] == b[0] && b[strlen(b) - 1] == c[0])
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
