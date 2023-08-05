#include <stdio.h>
#define PI 3.14
int main() {
	// const and define 
	// Const writing before the variable type and makes that variable unchangeable for example

	const int x = 4;

	x = 5;

	// The define int is written above the main() function with the variable name, so the variable is immutable

	PI = 4.14;

	printf("%d, %f", x, PI);

}