#include <stdio.h>

int main() {
	// Break -> Break the loop and exit the loop
	// Continue -> Pass on the curently element in loop

	int x = 0,y = 0;
	/*while (true)
	{
		x += 1;
		printf("%d", x);
		break;
	}*/
	while (y > 11)
	{
		y += 1;
		if (y % 2 != 0)
		{
			continue;
		}
		printf("%d", y);
	}
}