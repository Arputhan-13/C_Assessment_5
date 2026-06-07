#include <stdio.h>
int main()
{    
    int a, b, c, d, f,e=0,g=1,i;
    printf("Enter the Number : ");
    scanf("%d",&a);
    b=a%10;
    for( d=a;d!=0;d=d/10)
    {
    e=e+1;
    }
    for(i=1;i<=e-2;i++)
    {
     g=g*10;
    }
    f=(a/10)%g;
    for(d=a;d!=0;d=d/10)
    {
    c=d%10;
    }
    printf("%d%d%d",b,f,c);
}