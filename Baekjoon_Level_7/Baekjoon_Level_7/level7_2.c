#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ÃÖ´ñ°ª
int main()
{
	int Matrix[9][9], Max = 0, Row, Column;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &Matrix[i][j]);
			if (Matrix[i][j] >= Max)
			{
				Max = Matrix[i][j];
				Row = i + 1;
				Column = j + 1;
			}
		}
	printf("%d\n%d %d", Max, Row, Column);

	return 0;
}