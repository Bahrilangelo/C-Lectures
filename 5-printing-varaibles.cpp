#include <stdio.h>

int main() {
	// On this lecture we learn how to print this varaibles

	int a = 5;
	float b = 8.3;
	char c = 'B';
	char d[10] = "Bahri";

	// We need the string formatter for printing values
	// int -> %d
	// float -> %f
	// char -> %c
	// str -> %s

	printf("%d\n", a);
	printf("%f\n", b);
	printf("%c\n", c);
	printf("%s\n", d);

	// If we limit the float use this -> %.2f

	printf("%.2f", b);
	return 0;
}