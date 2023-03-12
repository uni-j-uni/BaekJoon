#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 코딩은 체육과목 입니다
int main()
{
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N / 4; i++)
		printf("long ");

	printf("int");

	return 0;
}