#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int H, M, cook;

	scanf("%d %d\n%d", &H, &M, &cook);

	if (M + cook >= 60) {
		H += (M + cook) / 60;
		M = (M + cook) % 60;
	}
	else
		M += cook;

	if (H >= 24)
		H -= 24;

	printf("%d %d", H, M);

	return 0;
}*/

int main()
{
	int H, M, cook, result;

	scanf("%d %d\n%d", &H, &M, &cook);

	result = 60 * H + M + cook;

	printf("%d %d", result / 60 % 24, result % 60);

	return 0;
}