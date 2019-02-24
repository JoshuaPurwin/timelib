#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

struct date
{
    int day;
    int month;
    int year;
};

int day_of_the_year(struct date curdate);
int isLeapyear(struct date curdate);
int get_days_for_month(int month, struct date curdate);
int exists_date(struct date curdate);
void input_date(struct date *curdate);


#endif // TIME_H_INCLUDED
