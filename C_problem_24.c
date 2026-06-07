#include<stdio.h>
#include<math.h>
int main()
{
    int a, i,b, c=0,d, e, f;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
    b=a%10;
    e=(a/10)%10;
    f=e*10+b;
    d=sqrt(f);
    if(d*d==f && f>=10)
    {
    c=c+1;
    }
    }
    printf("%d",c);
    
}