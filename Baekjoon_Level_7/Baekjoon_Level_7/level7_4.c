#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// »öÁ¾ÀÌ
int main()
{
	int Paper[100][100] = { 0, }, Color, Width, Height, Area = 0;

	scanf("%d", &Color);

	for (int i = 0; i < Color; i++)
	{
		scanf("%d %d", &Width, &Height);

		for (int j = 0; j < 10; j++)
			for (int k = 0; k < 10; k++)
				Paper[Width + j][Height + k] = 1;
	}

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (Paper[i][j] == 1)
				Area++;

	printf("%d", Area);

	return 0;
}