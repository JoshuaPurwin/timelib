#include "time.h"
/**
 * name: day_of_the_year
 * parameters: int day, int month, int year
 * return: number of the day: int
 * description: the function calculates the number of the given date in the given year
 **/
int day_of_the_year(struct date curdate)
{
    if(exists_date(curdate) == 0)
    {
        return -1;
    }
    int amount = 0;
    for(int i = 0; i < curdate.month-1;i++)
    {
        amount += get_days_for_month(i+1, curdate);
    }
    amount = amount + curdate.day;


    return amount;

}

/**
Bezeichner: is_leapyear
Übergabeparameter: int year
Rückgabewert: int
0, wenn das übergebene Jahr kein Schaltjahr ist
1, wenn das übergebene Jahr ein Schaltjahr ist
-1, wenn das Jahr vor 1582 liegt
Beschreibung: Die Funktion übermittelt für ein übergebens Jahr ob es sich
um ein Schaltjahr handelt
*/

int is_leapyear(struct date curdate)
{
    if(curdate.year<1582)
    {
        return -1;
    }
    else if (curdate.year%4 != 0)
    {
        return 0;
    }
    else if (curdate.year%100 != 0)
    {
        return 1;
    }
    else if (curdate.year%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

/**
 * name: get_days_for_month
 * parameters: int month, int year
 * return: days in given month/year between 28-31, -1 when year or month is invalid
 * description: The function retuns the amount of days in the given month/year. The value for month
 has to be between 1-12. Includes leap years
 **/

int get_days_for_month(int month, struct date curdate)
{
    if (is_leapyear(curdate)== 0)
    {
        int monthlen[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        return monthlen[month-1];
    }
    else if(is_leapyear(curdate) == 1)
    {
        int monthlen[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        return monthlen[month-1];
    }

    else
    {
        return -1;
    }
}

/**
 * name: exists_date
 * parameters: int day, int month, int year
 * return: 1 if date is valid, 0 if date is invalid
 * description: The function checks if the given date is between 1.1.1582 and 31.12.2018
 **/

int exists_date(struct date curdate)
{
    if(curdate.year < 1582 || curdate.year > 2400)
    {
        return 0;
    }
    else if(curdate.month < 1 || curdate.month > 12)
    {
       return 0;
    }
    else if(curdate.day < 1 || curdate.day > get_days_for_month(curdate.month, curdate))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void input_date(struct date *curdate)
{
    do
    {
    printf("Bitte einen Tag, Monat und Jahr angeben\n");
    scanf("%i",&curdate->day);
    scanf("%i",&curdate->month);
    scanf("%i",&curdate->year);
    }while(exists_date(*curdate) != 1);

}






