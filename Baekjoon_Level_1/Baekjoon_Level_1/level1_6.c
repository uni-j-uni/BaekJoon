#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��Ģ����
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d", a % b);

	return 0;
}