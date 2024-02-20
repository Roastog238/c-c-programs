#include<stdio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
int x,y,r,PLUS;
PLUS = +;
int op;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
printf("enter an operator\n");
scanf("%d",&op);
switch (op)
{
case '+':
    r= x PLUS y;
    printf("sum is %d+%d=",x,y,r);
    break;
case '-':
    r= x MINUS y;
    printf("diff is %d",r);
    break;
case '*':
    r= x MULT y;
    printf(" multiply is %d",r);
    break;
case '/':
    r= x DIVIDE y;
    printf("division is %d",r);
    break;

default:
printf("\ninvalid operator");
    break;
}
}