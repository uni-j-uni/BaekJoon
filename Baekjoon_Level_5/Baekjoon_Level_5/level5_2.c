#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int self_num[10000] = { 0, };

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		self_num[add(i) - 1] = add(i);

		if (self_num[i - 1] == 0)
			printf("%d\n", i);
	}

	return 0;
}

int add(int n)
{
	int result = n;

	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}

	return result;
}