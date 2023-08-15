#include <stdio.h>

int main() {

	int num;
	int sum = 0;

	printf("Enter number\n");
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++)
	{

		sum += i;

	}
	printf("%d ", sum);

}