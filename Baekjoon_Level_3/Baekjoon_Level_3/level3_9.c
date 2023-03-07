#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// º° Âï±â - 1
int main()
{
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}