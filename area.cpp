//Al Annizo Exo Ernest
#include <stdio.h>

int main () {
		int L, B, X, Y;
	scanf("%d %d", &L, &B);
	X = L * B;
	Y = 2 * (L + B);
	if (X > Y) {
		printf("Area\n");
		printf("%d", X);
	} else if (Y > X) {
		printf("Peri\n");
		printf("%d", Y);
	} else {
		printf("Eq\n");
		printf("%d", X);
	}
	return 0;
}
