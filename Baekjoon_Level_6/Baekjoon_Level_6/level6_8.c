#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 크로아티아 알파벳
int main()
{
	int cnt;
	char Word[101];

	scanf("%s", Word);
	cnt = strlen(Word);

	for (int i = 0; Word[i] != NULL; i++)
	{
		if (Word[i] == 'd' && Word[i + 1] == 'z' && Word[i + 2] == '=') cnt--;
		if ((Word[i] == 'l' || Word[i] == 'n') && Word[i + 1] == 'j') cnt--;
		if (Word[i] == '=' || Word[i] == '-') cnt--;
	}
	printf("%d", cnt);

	return 0;
}