#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    printf("enter the number\n");
    scanf("%d",&a);
   d=a;
    while (a != 0)
    {
        b=a%10;
        c = c*10+b;
        a/=10;
    
    }
    printf(" reverse of %d is %d ",d,c);
}