#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù
/*int main()
{
	int King = 1, Queen = 1, Rook = 2, Bishop = 2, Knight = 2, Pawn = 8;
	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;

	scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

	if (A > King)
		A = -(A - King);
	else if (A == King)
		A = 0;
	else
		A = King - A;

	if (B > Queen)
		B = -(B - Queen);
	else if (B == Queen)
		B = 0;
	else
		B = Queen - B;

	if (C > Rook)
		C = -(C - Rook);
	else if (C == Rook)
		C = 0;
	else
		C = Rook - C;

	if (D > Bishop)
		D = -(D - Bishop);
	else if (D == Bishop)
		D = 0;
	else
		D = Bishop - D;

	if (E > Knight)
		E = -(E - Knight);
	else if (E == Knight)
		E = 0;
	else
		E = Knight - E;

	if (F > Pawn)
		F = -(F - Pawn);
	else if (F == Pawn)
		F = 0;
	else
		F = Pawn - F;

	printf("%d %d %d %d %d %d", A, B, C, D, E, F);


	return 0;
}*/

int main()
{
	int King = 0, Queen = 0, Rook = 0, Bishop = 0, Knight = 0, Pawn = 0;

	scanf("%d %d %d %d %d %d", &King, &Queen, &Rook, &Bishop, &Knight, &Pawn);
	printf("%d %d %d %d %d %d", 1 - King, 1 - Queen, 2 - Rook, 2 - Bishop, 2 - Knight, 8 - Pawn);

	return 0;
}