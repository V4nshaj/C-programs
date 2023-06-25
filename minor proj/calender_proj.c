#include <stdio.h>
#include <string.h>
/*
Day         Remainder
Saturday    0
Sunday      1
Monday      2
Tuesday     3
Wednesday   4
Thursday    5
Friday      6*/
struct not
{
    int d;
    int m;
    int y;
    char nt[20];
}
n1[100];
// returning day for specific date
char daycode(int x)
{
    char dayname;
    switch (x)
    {
    case 0:
        dayname = "Sunday";
        break;
    case 1:
        dayname = "Monday";
        break;
    case 2:
        dayname = "Tuesday";
        break;
    case 3:
        dayname = "Wednesday";
        break;
    case 6:
        dayname = "Thursday";
        break;
    case 4:
        dayname = "Friday";
        break;
    case 5:
        dayname = "Saturday";
        break;
    }
    return dayname;
}
// printing day for specific date
void calday(int year, int month, int day)
{
    int tot = totaldays(year, month);
    tot = tot + day;
    char daynam = daycode(tot % 7);
    printf("The day for date %d-%d-%d is %c", day, month, year, daynam);
}
int startday(int year, int month)
{
    // //Get total number of days since 1/1/1500
    int start = 3;
    int totdays = totaldays(year, month);
    // Return the start day
    return (totdays + start) % 7;
}
int totaldays(int year, int month)
{
    int tot = 0;
    for (int i = 1500; i < year; i++)
    {
        if (leap(i) == 1)
            tot = tot + 366;
        else
            tot = tot + 365;
    }
    for (int i = 1; i < month; i++)
    {
        tot = tot + daysinmonth(year, i);
    }
    return tot;
}
void printMonthTitle(int year, int month)
{
    printf("         %d, %d", MonthName(month), year);
    printf("–––––––––––––––––––––––––––––");
    printf(" Sun Mon Tue Wed Thu Fri Sat");
}
void calender(int year, int month, int n)
{
    int i = 0;
    int start = startday(year, month);
    int daymon = daysinmonth(year, month);
    for (i = 0; i < start; i++)
        printf("    ");
    for (i = 1; i <= daymon; i++)
    {
        if (i < 10)
            printf("   %d", i);
        else
            printf("  %d", i);
        if (i % 7 == 0)
            printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        if (n1[i].m == month && n1[i].y == year)
            printf("%d->%s \n", n1[i].d, n1[i].nt);
    }
}
char MonthName(int month)
{
    char mont;
    switch (month)
    {
    case 1:
        mont = "January";
        break;
    case 2:
        mont = "February";
        break;
    case 3:
        mont = "March";
        break;
    case 4:
        mont = "April";
        break;
    case 5:
        mont = "May";
        break;
    case 6:
        mont = "June";
        break;
    case 7:
        mont = "July";
        break;
    case 8:
        mont = "August";
        break;
    case 9:
        mont = "September";
        break;
    case 10:
        mont = "October";
        break;
    case 11:
        mont = "November";
        break;
    case 12:
        mont = "December";
        break;
    }
    return mont;
}
int leap(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}
int daysinmonth(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    if (month == 2) // return leap(y) ? 29 : 28;
    {
        if (leap(year) == 1)
            return 29;
        else
            return 28;
    }
}
int main()
{
    int Month, Year, Day, month1, year1, n;
    printf("Enter day, month, year ...format is dd-mm-yyyy to know the day");
    printf("\n\n\tEnter dd-mm-yyyy: ");
    scanf("%d-%d-%d", &Day, &Month, &Year);
    void calday(Year, Month, Day);
    printf("Enter no. of notes to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n\tEnter dd-mm-yyyy: ");
        scanf("%d-%d-%d", &n1[i].d, &n1[i].m, &n1[i].y);
        printf("Enter note: ");
        scanf("%s", &n1[i].nt);
    }
    printf("This program shows calender of a given month\n");
    printf("Enter month, year ...format is mm-yyyy");
    printf("\n\n\tEnter mm-yyyy: ");
    scanf("%d-%d", &month1, &year1);
    void calender(month1, year1, n);
    return 0;
}