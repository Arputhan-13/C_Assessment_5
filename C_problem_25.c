#include <stdio.h>
int main()
{
    int a,i,b, prime=1,c=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
    b=a%10;
    prime=1;
    if(b<2)
    {
    prime=0;
    }
    for(i=2;i<b;i++)
    {
    if(b%i==0)
    {
    prime=0;
    }
    }
    if(prime==1)
    {
    c=c+1;
    }
    }
    printf("%d",c);
}