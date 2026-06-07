#include <stdio.h>
int main()
{
    int a, b, i,f, c=0,m,d=1,e;
    printf("Enter the number ");
    scanf("%d",&a);
    m=a;
    b=a%10;
    if(b%2==0)
    {
    printf("%d",a);
    }
    for(i=a;a!=0;a=a/10)
    {
    c=c+1;
    }
    for(i=1;i<c;i++)
    {
    d=d*10;
    }
    e=m/d;
    f=m%d;
    if(b%2==1)
    {
    printf("%d%d",e-1,f);
    }
    
    
    
}