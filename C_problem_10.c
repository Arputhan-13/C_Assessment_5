#include <stdio.h>
int main()
{
    int a=100,b,c=0,i;
    for(i=10;i<a;i++)
    {
    if(i%2==1)
    {
    b=(i/10)%10;
    if(b==7)
    {
    c=c+i;
    }
    }
    }
    printf("%d",c);
    
}