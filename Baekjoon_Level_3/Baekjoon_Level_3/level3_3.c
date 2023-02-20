#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, Sum = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		Sum += i;

	printf("%d", Sum);

	return 0;
}