#include <stdio.h>
int main()
{
    int a,b, c, d, e=0, i;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for(i=a;a>=10;a=a/10)
    {
    b=a%10;
    c=(a/10)%10;
    d=c*10+b;
    if(d%2==1)
    {
    e=e+1;
    }
    }
    printf("%d",e);
}