#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,x,root1,root2;
  printf("enter the value of a b and c\n");
  scanf("%d%d%d",&a,&b,&c);
  x=b*b - 4*a*c;
  if(x>0){
    root1 = (-b + sqrt(x))/(2*a);
    root2 = (-b - sqrt(x))/(2*a);
    printf("roots are real and different.\n");
    printf("root1 = %d\n",root1);
    printf("root2=%d\n",root2);
  }else if (x==0)
  {
    root1= -b/(2*a);
    printf("roots are real and the same.\n");
    printf("root = %d\n",root1);
  }else{
    int realpart = -b/(2*a);
    int imaginarypart = sqrt(-x)/(2*a);
    printf("roots are complex and different.\n");
    printf("root 1 =%d + %d\n",realpart, imaginarypart);
    printf("root 2=%d - %d\n",realpart,imaginarypart);

  }
 return 0; 

} 