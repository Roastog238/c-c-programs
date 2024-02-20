#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the value of a, b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    d= b * b - 4 * a * c;
    if (d==0)
    {
        printf("roots are real and equal");
        r1= -b/(2*a);
        r2= -b/(2*a);
        printf("root1 = %f and root2 = %f",r1,r2);
    }
    else if (d>0)
       {
        printf("roots ar ereal and different\n");
        r1= ( -b - sqrt(d)) / ( 2 * a );
        r2= ( -b + sqrt(d)) / ( 2 * a );   
        printf("root1 = %f and root2 = %f",r1,r2);
         }
    else
    printf("roots are imaginary");
    return 0;
}