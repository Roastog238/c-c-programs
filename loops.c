#include<stdio.h>
int main()
{
    int count=0;
    int marks;
    int sum=0;
    int avg=0;
    while (count<5)
    {
      printf("enter the marks\n");
      scanf("%d",&marks);
      count++;
      sum=sum+marks;
      avg=sum/count;

    }
      printf("sum of 5 sub is %d\n",sum);
      printf("avg is %d\n",avg);
}