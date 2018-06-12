#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mark;
    char grade;

    printf("Enter your marks: ");
    scanf("%f", &mark);

    if(mark > 100 || mark < 0)
    {
        //checks the validity of the mark
        printf("Error! Invalid value\n");
        exit(1);
    }
    //rest of the if else ladder
    else if(mark >= 75)
    {
        grade = 'A';
    }
    else if(mark >= 65)
    {
        grade = 'B';
    }
    else if(mark >= 55)
    {
        grade = 'C';
    }
    else if(mark >= 35)
    {
        grade = 'S';
    }
    else
    {
        grade = 'F';
    }

    printf("\nYour Grade for the subject is %c\n",grade);
    return 0;
}
