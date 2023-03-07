#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// A + B - 8
int main()
{
	int T, A, B;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}

	return 0;
}