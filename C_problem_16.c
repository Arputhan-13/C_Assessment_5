#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if(a<0)
    {
    printf("Not prime");
    return 0;
    }
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
    printf("Not Prime");
    return 0;
    }
    }
    printf("prime");

}