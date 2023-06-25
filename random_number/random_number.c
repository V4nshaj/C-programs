#include <stdio.h>
#include <stdlib.h>
#include <time.h>//to use time function
int main()
{
    int random=0;
    srand(time(0));/*this provides different seed value as rand() gets only 1 seed value due to which same random no. appears if we give 1 in place of time
    the seed does nt change as 1 no. remains with time(0) it keeps on changing as it tells how many seconds have passed from the midnight of 1 january 1970
    to the current time*/
    random=rand() % 6 + 1;/*rand() function creates random number %6 is upper limit with dice having upperlimit 6
    and lower limit 1*/
    printf("Dice = %d", random);
    return 0;
}

