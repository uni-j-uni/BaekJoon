#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int LeapYear;

	scanf("%d", &LeapYear);

	if (LeapYear % 400 == 0)
		printf("1");
	else if (LeapYear % 100 == 0)
		printf("0");
	else if (LeapYear % 4 == 0)
		printf("1");
	else
		printf("0");

	return 0;
}*/

int main()
{
	int LeapYear;

	scanf("%d", &LeapYear);

	if (LeapYear % 4 == 0 && LeapYear % 100 != 0 || LeapYear % 400 == 0)
		printf("1");
	else
		printf("0");

	return 0;
}