#include <stdio.h>

int	main() {
	int		n;
	int		l, r;
	int		min = 0;
	scanf("%d", &n);
	char	s[n + 1];
	scanf("%300000s", s);

	for (int i = 1; i < n; i ++) {
		if (s[i] == 'E')
			min ++;
	}
	l = 0;
	r = min;
	for (int i = 1; i < n; i ++) {
		if (s[i - 1] == 'W')
			l ++;
		if (s[i] == 'E')
			r --;
		if (l + r < min)
			min = l + r;
	}
	printf("%d\n", min);
	return 0;
}

//10:29