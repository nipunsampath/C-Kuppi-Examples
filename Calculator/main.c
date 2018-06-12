#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float value1,value2,ans;

    //Selecting the operation
    printf("Select\n\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Divide\n\nChoice : ");
    scanf(" %d",&choice);

    //inputs
    printf("Enter Value 1: ");
    scanf("%f",&value1);
    printf("Enter Value 2: ");
    scanf("%f",&value2);

    if(choice == 1)
    {
        ans = value1 + value2;
    }
    else if(choice == 2)
    {
        ans = value1 - value2;
    }
    else if(choice == 3)
    {
        ans = value1 * value2;
    }
    else if(choice == 4)
    {
        if(value2 == 0)
        {
            fprintf(stderr,"%s","Error! Value 2 cannot be zero");
            exit(1);
        }
        else
            ans = value1 / value2;
    }
    else
    {
        printf("Error! choice must be within 1 to 4 ");
        exit(2);
    }
    printf("\nAnswer is : %f",ans);
    return 0;
}
