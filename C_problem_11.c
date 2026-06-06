#include <stdio.h>
int main()
{
    int a,sum =0,i;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for(i=a;a!=0;i++){
    if(a>0)
    {
    a=a/10;
    sum =sum + 1;
    }
    }
    printf("Number of digits : %d",sum);
}