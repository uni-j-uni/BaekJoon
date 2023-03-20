#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 소수 찾기
int main()
{
	int N, num, cnt = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);

		if (num == 2)
			cnt++;
		for (int j = 2; j < num; j++)
			if (num % j == 0)
				break;
			else if (j == num - 1)
				cnt++;
	}
	printf("%d", cnt);

	return 0;
}