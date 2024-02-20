#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c=0,d;
    printf("enter the number\n");
    scanf("%d",&a);
    d=a;
   
    while (a != 0)
    {
        b= a%10;
        a=a/10;
        c= c + b*b*b;
    }
    if (c == d)
    {
        printf("%d is armstrong",d);
    }
    else{
        printf("number is not armstorng");
    }
    
    

}