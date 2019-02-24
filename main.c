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
    struct date curdate;
    input_date(&curdate);
    printf("Tag des Jahres: %i\n", day_of_the_year(curdate));
    return 0;
}
