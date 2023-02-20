#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	int result1 = (num2 % 10) * num1, result2 = (num2 / 10) % 10 * num1, result3 = (num2 / 100) * num1;

	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result1 + result2 * 10 + result3 * 100);

	return 0;
}