#include <stdio.h>
#include <string.h>

const char	key[4][8] = {"dreamer", "eraser", "dream", "erase"};

int	judge(char *s) {
	if (!*s)
		return 1;
	for (int i = 0; i < 4; i ++)
		if (!strncmp(s, key[i], strlen(key[i])) && judge(s + strlen(key[i])))
			return 1;
	return 0;
}

int	main() {
	char	s[100000];

	scanf("%100000s", s);
	if (s[0] && judge(s))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
