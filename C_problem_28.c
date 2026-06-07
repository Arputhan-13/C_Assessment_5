#include <stdio.h>
int main()
{
    int a, b,c, d, e, i;
    printf("Enter the number 1 :");
    scanf("%d",&a);
    printf("Enter the number 2 :");
    scanf("%d",&b);
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
    printf("%d",(a*b)/c);
}