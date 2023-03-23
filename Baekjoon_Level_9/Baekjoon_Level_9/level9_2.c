#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 직사각형에서 탈출
int main()
{
	int x, y, w, h, min;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x <= y && x <= w - x && x <= h - y)
		min = x;
	else if (y <= x && y <= w - x && y <= h - y)
		min = y;
	else if (w - x <= x && w - x <= y && w - x <= h - y)
		min = w - x;
	else
		min = h - y;

	printf("%d", min);

	return 0;
}