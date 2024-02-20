#include<stdio.h>
int main()
{
    int num,b,c=0,d,base=1;
    printf("enter the number in decimal\n");
    scanf("%d",&num);
    d  =  num;
    while (num > 0)
    {
        b = num % 2;
        c = c + b*base;
        num=num/2;
        base=base*10;
    }
    printf("binary of %d is %d",d,c);
    
}