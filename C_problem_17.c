#include<stdio.h>
int main()
{
    int a, c=0, m,i, prime=1;
    printf("Enter the Number : ");
    scanf("%d",&a);
    m=a;
    for( ;m!=0;m=m/10)
    {
     c=c+(m%10);
    }
    if(a<2)
    {
        printf("Not prime");
    }
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
    prime=0;
    }
    }
    if(prime==1) 
    {
    printf(" %d is prime Number",a);
    }
    else{
    printf("%d is Not prime Number",a);
    }
    if(c==14) 
    {
    printf("& sum of digits is 14");
    }
    else
    {
    printf(" but sum of digits is not 14");
    }
}