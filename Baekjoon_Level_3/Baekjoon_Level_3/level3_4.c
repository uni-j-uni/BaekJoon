#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ¿µ¼öÁõ
int main()
{
	int X, Y = 0, N, a, b;

	scanf("%d %d", &X, &N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		Y += a * b;
	}

	if (X == Y)
		printf("Yes");
	else
		printf("No");

	return 0;
}