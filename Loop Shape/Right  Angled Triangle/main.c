#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j;

    printf("Enter an integer: ");
    scanf("%d",&rows);
    printf("\n");

    for(i = 1; i <= rows; i++)
    {
        for(j = 0;j < i;j++)
        {
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
