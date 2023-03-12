#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 그룹 단어 체커
int main()
{
	int N, cnt;

	scanf("%d", &N);
	cnt = N;

	for (int i = 0; i < N; i++)
	{
		char Word[101] = "";
		scanf("%s", Word);

		for (int j = 0; j < strlen(Word); j++)
			if (Word[j] != Word[j + 1])
				for (int k = j + 2; k < strlen(Word); k++)
				{
					if (Word[j] == Word[k])
					{
						cnt--;
						j = strlen(Word);
					}
				}
	}
	printf("%d", cnt);

	return 0;
}