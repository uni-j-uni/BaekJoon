#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char A[4], B[4];

	scanf("%s %s", A, B);

	if (A[2] > B[2])
		for (int i = 2; i >= 0; i--)
			printf("%c", A[i]);
	else if (A[2] == B[2])
		if (A[1] > B[1])
			for (int i = 2; i >= 0; i--)
				printf("%c", A[i]);
		else
			for (int i = 2; i >= 0; i--)
				printf("%c", B[i]);
	else
		for (int i = 2; i >= 0; i--)
			printf("%c", B[i]);

	return 0;
}