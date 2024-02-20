#include<stdio.h>
int main()
{
    int a=66;
    int b;
    int d=0;
    printf("Lets Play a game \n");
    printf("guess the number \n");
    scanf("%d",&b);
    while (b != a)
    {
    
            printf("try again\n");
            scanf("%d",&b);
            d++;
        }
            printf("you won the game\n");
            printf("Tries = %d\n",d);
       
        if (d>=5)
        {
            printf("you took too many tries");
        }
        else{
         printf("wonderfull very successfull porson\n");
        }
        
        
    
    return 0;

}