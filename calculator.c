#include<stdio.h>
int main()
{
    int a,b,d1,d2,d3,d4,d5,d6;
    printf("enter the six digit nmber\n");
    scanf("%d",&a);
    d6=a%10;
    a=a/10;
    d5=a%10;
    a=a/10;
    d4=a%10;
    a=a/10;
    d3=a%10;
    a=a/10;
    d2=a%10;
    a=a/10;
    d1=a%10;
    b=d6*100000+d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("your reverse digit is %d",b);
}