#include<stdio.h>
int main()
{
    int count=0,b=0,a,x;
        printf("enter the number yo \n");
        scanf("%d",&a);

    while (a != 0)
    {
        x=a%10;
        a=a/10;
        b = x + b;
        // a++;
    }
    printf("the sum of digits is\n %d",b);

    
    
}