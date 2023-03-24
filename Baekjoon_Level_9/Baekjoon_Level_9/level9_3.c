#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 네 번째 점
int main()
{
	int X[3], Y[3];

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &X[i], &Y[i]);

		for (int j = 0; j < i; j++)
		{
			if (X[i] == X[j])
			{
				X[i] = -1;
				X[j] = -1;
			}
			if (Y[i] == Y[j])
			{
				Y[i] = -1;
				Y[j] = -1;
			}
		}
	}

	for (int i = 0; i < 3; i++)
		if (X[i] != -1)
			printf("%d ", X[i]);

	for (int i = 0; i < 3; i++)
		if (Y[i] != -1)
			printf("%d", Y[i]);

	return 0;
}