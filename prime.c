#include<stdio.h>
void main(){
    int i,rem,count=0,num;
    printf("enter the number yu ant check prime\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        rem=num%i;
       if(rem==0)
        {count++;}
        
    }
    if (count>2)
    {
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }

}