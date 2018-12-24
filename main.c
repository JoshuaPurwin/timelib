/**
 * Hallo
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/
int day_of_the_year(int day, int month, int year)
{

    return 0;
}

/**
Bezeichner: isLeapyear
�bergabeparameter: int year
R�ckgabewert: int
0, wenn das �bergebene Jahr kein Schaltjahr ist
1, wenn das �bergebene Jahr ein Schaltjahr ist
-1, wenn das Jahr vor 1582 liegt
Beschreibung: Die Funktion �bermittelt f�r ein �bergebens Jahr ob es sich
um ein Schaltjahr handelt
*/

int isLeapyear(int year)
{
    if(year<1582)
    {
        return -1;
    }
    else if (year%4 != 0)
    {
        return 0;
    }
    else if (year%100 != 0)
    {
        return 1;
    }
    else if (year%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}
