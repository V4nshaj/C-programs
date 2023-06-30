#include<stdio.h>
#include<stdlib.h>//to use rand() func we need use stdlib
#include<time.h>//to use time() func
int main()
{
    int n,guess,nguesses=0;
    srand(time(0));/*to generate random no.use func rand() to generate a random no. every time
    use srand() func with time();*/
    n=rand()%100+1;//doing %100 only will get random no.s b/w 0-100 adding 1 gets to 1-100
    //keep running the loop until the no. is guessed
    do
    {
        printf("Guess the no. b/w 1-100\n");
        scanf("%d", &guess);
        if(guess>n)
        printf("Lower no. plz!\n");
        else if(guess<n)
        printf("Higher no. plz!\n");
        else
        {
            printf("The no. was %d\n", n);
        printf("U guessed in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=n);
    return 0;
}