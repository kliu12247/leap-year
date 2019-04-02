#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int year;

    do
{
    printf("Enter year: ");
   year = get_int();
}
    while (year <=0);

    if (year % 4 == 0)
    {
        if (year % 100 ==0)
            {
                if (year % 400 == 0)
                    {
                        printf("It is a leap year!\n");
                        return 0;
                    }
            printf("Not a leap year!\n");
            return 0;
            }
        printf("It is a leap year!\n");
        return 0;
        }
        else
        {
            printf("Not a leap year!\n");
            return 0;
        }
}
