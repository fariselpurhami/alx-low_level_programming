#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    int remaining_days = 0;
    int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (is_leap_year && month > 2)
    {
        day++;
    }

    switch (month)
    {
        case 1:
            remaining_days = 365 - day;
            break;
        case 2:
            remaining_days = is_leap_year ? 366 - day : 365 - day;
            break;
        case 3:
            remaining_days = is_leap_year ? 366 - 60 - day : 365 - 60 - day;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            remaining_days = 30 * (month - 1) - day + 212;
            break;
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            remaining_days = 31 * (month - 1) - day + 212;
            break;
        default:
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
            return;
    }

    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", remaining_days);
}
