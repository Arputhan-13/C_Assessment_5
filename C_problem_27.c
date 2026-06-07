#include<stdio.h>
int main()
{
    int a,b, c, d, e, f,g=0,i;
    for(i=1;i<100000;i++) 
    {
    a=i%10;
    b=(i/10)%10;
    c=(i/100)%10;
    d=(i/1000)%10;
    e=(i/10000)%10;
    f=a+b+c+d+e;
    if(f==14)
    {
    g=g+1;
    }
    }
    printf("%d",g);
}