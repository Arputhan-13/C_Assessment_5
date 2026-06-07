#include<stdio.h>
#include<math.h>
int main()
{
    int a, i,b, c=0,d;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
    b=a%10;
    d=sqrt(b);
    if(d*d==b)
    {
    c=c+1;
    }
    }
    printf("%d",c);
    
}