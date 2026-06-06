#include <stdio.h>
int main()
{
    int a=100,b,c,i;
    for(i=10;i<a;i++)
    {
    if(i%2==1)
    {
    b=i%10;
    c=(i/10)%10;
    if(b+c==7)
    {
     printf("%d\n",i);
    }
    }
    }
    
}