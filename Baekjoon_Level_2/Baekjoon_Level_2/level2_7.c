#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Dice1, Dice2, Dice3;

	scanf("%d %d %d", &Dice1, &Dice2, &Dice3);

	if (Dice1 == Dice2 && Dice2 == Dice3)
		printf("%d", 10000 + Dice1 * 1000);

	else if (Dice1 == Dice2 || Dice3 == Dice1)
		printf("%d", 1000 + Dice1 * 100);
	else if (Dice2 == Dice3)
		printf("%d", 1000 + Dice2 * 100);

	else if (Dice1 > Dice2 && Dice1 > Dice3)
		printf("%d", Dice1 * 100);
	else if (Dice2 > Dice1 && Dice2 > Dice3)
		printf("%d", Dice2 * 100);
	else if (Dice3 > Dice1 && Dice3 > Dice2)
		printf("%d", Dice3 * 100);

	return 0;
}