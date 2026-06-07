#include <stdio.h>
int main()
{
    int a, b,c, d, e, i, f, h, y, u;
    printf("Enter the number 1 :");
    scanf("%d",&a);
    printf("Enter the number 2 :");
    scanf("%d",&b);
    printf("Enter the number 3 :");
    scanf("%d",&h);
    if(a>b)
    {
    c=a;
    d=b;
    }
    else
    {
    c=b;
    d=a;
    }
    for(i=c;d!=0;)
    {
    e=c%d;
    c=d;
    d=e;
    }
    f=(a*b)/c;
    if(h>f)
    {
    y=h;
    u=f;
    }
    else
    {
    y=f;
    u=h;
    }
    for(i=y;u!=0;)
    {
    e=y%u;
    y=u;
    u=e;
    }
    printf("%d",(f*h)/y);
}