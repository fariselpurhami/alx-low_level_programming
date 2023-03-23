#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    int days_left = 0;
    int is_leap_year = 0;

    /* Check if it's a leap year */
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                is_leap_year = 1;
            }
        }
        else
        {
            is_leap_year = 1;
        }
    }

    /* Calculate the number of days left in the year */
    if (is_leap_year == 1 && month > 2)
    {
        days_left = 366 - day;
    }
    else
    {
        days_left = 365 - day;
    }

    /* Print the results */
    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", days_left);
}
