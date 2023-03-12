#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ¹®ÀÚ¿­
int main()
{
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		char S[1001] = "";
		
		scanf("%s", S);

		printf("%c%c\n", S[0], S[strlen(S) - 1]);
	}

	return 0;
}