#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,total = 0,i = 1;

    printf("Enter an integer: ");
    scanf("%d",&number);

    while(i <= number)
    {
        total += i;
        i++;
    }

    printf("\nThe Sum of natural numbers from 1 to %d is %d\n ",number,total);
    return 0;
}
