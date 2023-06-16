#include <stdio.h>
#include <string.h>

int	main() {
	int		n;
	int		c_n = 0;
	int		k;
	int		k_max = 0;
	char	s[101];
	char	c[27] = "";
	char	*c_s;
	scanf("%d", &n);
	scanf("%100s", s);

	for (int i = 0; i < n; i ++) {
		k = 0;
		c_n = 0;
		for (int j = 0; j < i; j ++) {
			if (!strchr(c, s[j])) {
				c[c_n] = s[j];
				c[c_n + 1] = 0;
				c_n ++;
			}
		}
		for (int j = i; j < n; j ++) {
			c_s = strchr(c, s[j]);
			if (c_s) {
				k ++;
				*c_s = '0';
			}
		}
		if (k_max < k)
			k_max = k;
	}
	printf("%d\n", k_max);
	return 0;
}

// 9:50