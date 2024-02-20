#include<stdio.h>
int main()
{
    int rev,num,rem,d;
    d=num;
    printf("enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (rev = d)
    {
         printf("number is palindrom");
    }else{
        printf("numbr is not palindrom");
    }
    
}