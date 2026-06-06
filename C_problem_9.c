#include <stdio.h>
int main()
{
    int a=100,b,c=0,i;
    for(i=10;i<a;i++)
    {
    b=i%10;
    if(b==5)
    {
    c=c+i;
    }
    }
    printf("%d",c);
    
}