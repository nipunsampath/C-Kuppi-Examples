#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,factorial = 1,i = 1;

    printf("Enter an integer: ");
    scanf("%d",&number);

    while(i <= number)
    {
        if(number == 0)
        {
            factorial = 1;
            break;
        }
        factorial *= i;
        i++;
    }

    printf("The Factorial of %d is %d",number,factorial);
    return 0;
}
