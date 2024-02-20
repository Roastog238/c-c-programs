#include<stdio.h>
int main(){
    int s,m,h,a;
    printf("enter the time in seconds\n");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    a=(s-(3600*h)-m*60);
    printf("%d hour %.1d minutes %d seconds" ,h,m,a);
}