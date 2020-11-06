#include <stdio.h>

int nextDay(int day, int month, int year);

int main() {
    int year, month, day;
    printf ("Enter a date in the form day month year: ");
    scanf("%d %d %d", &day, &month, &year);
    nextDay(day, month, year);
    printf ("The date of the next day is: %d/%d/%d", day, month, year);
    return 0;
}

int nextDay(int day, int month, int year) {
    day++;
    int days_per_month = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        days_per_month = 30;
    } else if (month == 2) {
        days_per_month = 28;
        if (year % 4 == 0) {
            days_per_month = 29;
            if (year % 100 == 0) {
                days_per_month = 28;
                if (year % 400 == 0) {
                    days_per_month = 29;
                }
            }
        }
    }
    if (day > days_per_month) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}




