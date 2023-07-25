#include <stdio.h>

int main() {
	// Aritmetic operators is: +, -, *, /, %
	// + is sum
	// - is subtraction
	// * is multiplication 
	// / is division
	// % is mod

	int a = 6, b = 3;
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	// Operator Precedence 
	// ()		1
	// /,*,%	2
	// +,-		3

	int a = 3, b = 8, c = 4, d = 6;
	printf("%d\n", a + b * c - d / c);
	printf("%d\n", (a + b) * c - d / c);
	printf("%d\n", (a + b) * (c - d) / c);
	return 0;
}