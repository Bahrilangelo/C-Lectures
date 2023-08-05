#include <stdio.h>

int main() {
	// Locigal Operator
	// && || !
	// and && True -> True and True - else False
	// or || False -> False and False - else True
	// not ! True -> !False - False -> !True

	int x = 25, y = 30;
	
	printf("%d\n", x > y && y > x); // 1 True and 1 False -> False

	printf("%d\n", x > y || y > x); // 1 True or 1 False -> True

	printf("%d\n", !(x > y || y > x)); // 1 True not -> False

}