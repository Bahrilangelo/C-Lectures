#include <stdio.h>

int main() {
    // We crate two varaible. 
	int a = 0, b = 0;
    // Printing on the screen
	printf("Enter two numbers\n");
    // Taking values to user
	scanf_s("%d %d", &a, &b);
    // Finally printing the sum of this values
	printf("The sum of the numbers is: %d", a + b);
	return 0;
}