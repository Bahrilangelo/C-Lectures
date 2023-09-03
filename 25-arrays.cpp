#include <stdio.h>

int main() {
	
	int list[5] = {1,2,3,4,5};
    // list is an array of 5 integers
    // list[0] = 1
    // list[1] = 2

    printf("%d",list[0]);

    list[4] = 3;
    // We changed 4th index 5 to 3
    printf("%d",list[4]);

    // creating list with for loop

    int list2[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&list2[i]);
    }
    
    // printing list with for loop

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",list2[i]);
    }

    // creating list with while loop

    int list3[3];
    int i = 0;
    while (i < 3)
    {
        printf("Enter a number: ");
        scanf("%d",&list3[i]);
        i++;
    }

    // printing list with while loop

    int x = 0;
    while (x < 3)
    {
        printf("%d\n",list3[x]);
        i++;
    }
    
    
}