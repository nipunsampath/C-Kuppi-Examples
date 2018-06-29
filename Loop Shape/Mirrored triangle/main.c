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
        for(j = 0;j <= rows;j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
