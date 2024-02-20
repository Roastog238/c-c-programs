#include<stdio.h>
int main(){
    int num,fabi,series,i=1,n;
    printf("enter the first and second numbers\n");
    scanf("%d",&num);
    printf("enter the size of the series\n");
    scanf("%d",&n);
    while (i<n)
    {
        printf("%d\t",num);
        printf("%d\t",i);
        fabi=num+fabi;
        
        i++;
    }
    
}

