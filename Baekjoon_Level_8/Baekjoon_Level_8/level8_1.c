#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ¹úÁý
int main()
{
	int N, cnt, num = 1;

	scanf("%d", &N);

	for (cnt = 1; num < N; cnt++)
	{
		int room = 6;

		room *= cnt;
		num += room;
	}
	printf("%d", cnt);

	return 0;
}