#include<stdio.h>
int main()
{
    int a,i,b,d=0;
    for(a = 1; a <= 9; a++)
    {
    b=0;
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
    b=b+1;
    }
    }
    if(a>1 && b==0 )
    {
    d=d+1;
    }
    }
    printf("%d",d);
}