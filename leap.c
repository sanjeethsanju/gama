#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("it is leap year",year);
    }
    else if(year%100==0)
    {
        printf("it is not leap year",year);
    }
    else if(year%4==0)
    {
        printf("it is leap year",year);
    }
    else
    {
        printf("it is not year",year);
    }
    return 0;
}    
