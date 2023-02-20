#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*int main()
{
	char S[101] = "";
	int alphabet[26] = { 0, };

	scanf("%s", S);

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == 0)
			alphabet[i] -= 1;

		for (int j = 0; j < 100; j++)
		{
			if (alphabet[i] != -1)
				break;
			if ((int)S[j] == i + 97)
				alphabet[i] = j;
		}

		printf("%d ", alphabet[i]);
	}

	return 0;
}*/

int main()     //다른 사람 코드 고침
{
	char S[100];
	gets_s(S);
	int alphabet[26];

	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	for (int i = strlen(S) - 1; i > -1; i--)
		alphabet[S[i] - 97] = i;

	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);

	return 0;
}