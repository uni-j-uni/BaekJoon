#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 세로읽기
int main()
{
	char Word[5][16] = { "" };

	for (int i = 0; i < 5; i++)
		scanf("%s", &Word[i]);

	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 5; j++)
			if (Word[j][i] != NULL)
				printf("%c", Word[j][i]);

	return 0;
}