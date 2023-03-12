#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// º° Âï±â - 7
/*int main()
{
	int N, M, P = 1;

	scanf("%d", &N);

	M = N - 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf(" ");
		M--;

		for (int k = 0; k < P; k++)
			printf("*");
		P += 2;

		printf("\n");
	}
	P -= 2;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");

		P -= 2;
		for (int k = 0; k < P; k++)
			printf("*");

		printf("\n");
	}

	return 0;
}*/

void star(int N, int M)
{
	for (int j = 0; j < N - M; j++) printf(" ");
	for (int j = 1; j < M * 2; j++) printf("*");

	printf("\n");
}

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) star(N, i);
	for (int i = N - 1; i >= 1; i--) star(N, i);

	return 0;
}