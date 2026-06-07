#include<stdio.h>
int main()
{
    int a, g, b,h,i, prime=1;
    printf("Enter the 4 digit Number : ");
    scanf("%d",&a);
    b=(a/10)%10;
    g=(a/100)%10;
    h=g*10+b;
    if(h<2)
    {
        printf("Not prime");
    }
    for(i=2;i<h;i++)
    {
    if(h%i==0)
    {
    prime=0;
    }
    }
    if(prime==1) 
    {
    printf("prime ");
    }
    else{
    printf("Not prime ");
    }
}