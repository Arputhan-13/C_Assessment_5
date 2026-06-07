#include <stdio.h>
int main()
{
    int i, a;
    for(i=1000;i<10000;i++)
    {
    if(i%7==0 && i%9==0)
    {
     a=i;
    }
    }
    printf("\n%d",a);
}