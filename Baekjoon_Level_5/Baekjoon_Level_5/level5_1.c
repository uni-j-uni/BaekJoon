#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڿ� ���ڿ�
int main()
{
	char S[1001];
	int i;

	scanf("%s %d", S, &i);

	printf("%c", S[i - 1]);

	return 0;
}