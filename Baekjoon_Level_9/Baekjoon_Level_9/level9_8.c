#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ¼¼ ¸·´ë
int main()
{
	int Side1, Side2, Side3;

	scanf("%d %d %d", &Side1, &Side2, &Side3);

	if (Side1 >= Side2 + Side3)
		Side1 = Side2 + Side3 - 1;
	else if (Side2 >= Side3 + Side1)
		Side2 = Side3 + Side1 - 1;
	else if (Side3 >= Side1 + Side2)
		Side3 = Side1 + Side2 - 1;

	printf("%d", Side1 + Side2 + Side3);

	return 0;
}