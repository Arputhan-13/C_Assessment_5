#include <stdio.h>
int main()
{
    int a,sum =0,i, b;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for(i=a;a!=0;i++){
    if(a>0)
    {
    b=a%10;
    sum = b;
    printf("%d",sum);
    a=a/10;
    }
    }
    
}