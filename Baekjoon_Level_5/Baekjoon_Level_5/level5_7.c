#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열 반복
int main()
{
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int R = 0;
		char S[20] = "", P[20];

		scanf("%d %s", &R, S);

		for (int j = 0; S[j] != NULL; j++)
			for (int k = 0; k < R; k++)
				printf("%c", S[j]);

		printf("\n");
	}

	return 0;
}