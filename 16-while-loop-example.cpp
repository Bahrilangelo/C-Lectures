#include <stdio.h>

int main() {

	int num;
	int i = 1;

	printf("Enter number\n");
	scanf_s("%d", &num);

	while (i <= 10)
	{
		printf("%d ", num * i);
		i ++;
	}
	

}