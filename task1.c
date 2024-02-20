// table of the number user entered
#include<stdio.h>
int main()
{
    int a,i,k;
    printf("enter the number for you multiplle table\n");
    scanf("%d",&a);
    for (i=1; i<11;i++ )

    {
    //   i=i+1;
      k=a*i;
    int cls;
      printf("%d * %d = %d\n",a,i,k);
          
     }
     return 0;
    
}