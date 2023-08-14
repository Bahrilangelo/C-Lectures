#include <stdio.h>

int main() {
	//// Find the biggest number
	//int a, b;

	//printf("Enter Two Numbers\n");
	//scanf_s("%d %d", &a, &b);

	//if (a < b)
	//{
	//	printf("%d greater than %d",b, a);
	//}
	//else if (b < a)
	//{
	//	printf("%d greater than %d", a, b);
	//}
	//else {
	//	printf("%d equal to %d", a, b);
	//}

	// // Is number odd or even
	// int a;
	// printf("Enter Number\n");
	// scanf_s("%d", &a);

	// if (a % 2 == 0)
	// {
	// 	printf("This number is even");
	// }
	// else {
	// 	printf("This number is odd");
	// }
    	// Can i vote
	int age;
	printf("Enter Your Age\n");
	scanf_s("%d", &age);

	if (age >= 18) {
		printf("Yes, you can");
	}
	else
	{
		printf("No, you can't");
	}
}