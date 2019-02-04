/**
 * Hallo
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main()
{
    int day = 0, month = 0, year = 0;
    input_date(&day, &month, &year);
    printf("Tag des Jahres: %i\n", day_of_the_year(day, month, year));
    return 0;
}
