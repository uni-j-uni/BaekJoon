#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int cnt = 0;
	char word[101];

	scanf("%s", word);

	for (int i = 0; word[i] != NULL; i++)
	{
		if (strstr("word", "c=") != NULL || strstr("word", "c-") != NULL || strstr("word", "dz=") != NULL || strstr("word", "d-") != NULL || strstr("word", "lj") != NULL || strstr("word", "nj") != NULL || strstr("word", "s=") != NULL || strstr("word", "z=") != NULL)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}