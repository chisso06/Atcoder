#include <stdio.h>

char	o_or_x(char c, char z) {
	if ((c == 'o' && z == 'S') || (c == 'x' && z == 'W'))
		return 'o';
	else
		return 'x';
}

int	judge(int n, char *s, char *z, char z0, char z1) {
	z[0] = z0;
	z[1] = z1;
	z[n] = 0;

	for (int i = 1; i < n - 1; i ++) {
		if (o_or_x(s[i], z[i]) == 'o') {
			z[i + 1] = z[i - 1];
		} else {
			if (z[i - 1] == 'W')
				z[i + 1] = 'S';
			else
				z[i + 1] = 'W';
		}
	}
	if (((o_or_x(s[0], z[0]) == 'o' && z[1] == z[n - 1])
		 || (o_or_x(s[0], z[0]) == 'x' && z[1] != z[n - 1]))
		&& ((o_or_x(s[n - 1], z[n - 1]) == 'o' && z[0] == z[n - 2])
		 || (o_or_x(s[n - 1], z[n - 1]) == 'x' && z[0] != z[n - 2])))
		return 1;
	else
		return 0;
}

int	main() {
	int	n;
	scanf("%d", &n);
	char	s[n + 1];
	char	z[n + 1];

	scanf("%100000s", s);
	if (judge(n, s, z, 'S', 'S')
		|| judge(n, s, z, 'S', 'W')
		|| judge(n, s, z, 'W', 'S')
		|| judge(n, s, z, 'W', 'W'))
		printf("%s\n", z);
	else
		printf("-1\n");
	return 0;
}