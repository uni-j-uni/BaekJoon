#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 팰린드롬인지 확인하기
int main()
{
	char Word[101] = "";
	int length;

	scanf("%s", Word);

	length = strlen(Word);

	for (int i = 0; i <= length / 2; i++)
	{
		if (Word[i] == Word[length - 1])
			length--;
		else
		{
			printf("0");
			return 0;
		}
	}
	printf("1");

	return 0;
}