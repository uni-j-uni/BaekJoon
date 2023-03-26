#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 삼각형과 세 변
int main()
{
	while (1)
	{
		int Side1 = 0, Side2 = 0, Side3 = 0;

		scanf("%d %d %d", &Side1, &Side2, &Side3);
		if (Side1 == 0 && Side2 == 0 && Side3 == 0)
			break;

		if (Side1 >= Side2 + Side3 || Side2 >= Side3 + Side1 || Side3 >= Side1 + Side2)
			printf("Invalid\n");
		else if (Side1 == Side2 && Side2 == Side3)
			printf("Equilateral\n");
		else if (Side1 == Side2 || Side2 == Side3 || Side3 == Side1)
			printf("Isosceles\n");
		else
			printf("Scalene\n");
	}

	return 0;
}