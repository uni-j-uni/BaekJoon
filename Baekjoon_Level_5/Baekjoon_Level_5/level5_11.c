#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �״�� ����ϱ�
int main()
{
	for (int i = 0; i < 100; i++)
	{
		char S[101] = "";

		gets(S);

		printf("%s\n", S);
	}

	return 0;
}