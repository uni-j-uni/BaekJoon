#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 알람 시계
int main()
{
	int H, M;

	scanf("%d %d", &H, &M);

	if (H == 0 && M < 45)
		H = 24;

	if (M < 45)
		printf("%d %d", H - 1, 60 - (45 - M));
	else
		printf("%d %d", H, M - 45);

	return 0;
}