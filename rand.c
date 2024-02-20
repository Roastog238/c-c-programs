#include<stdio.h>
#include<math.h>
int main(){
    int num,factorial=1,i,k=1,count,sum_prime,sum_total;
    for ( i = 1; i <=10 ; i++)
    {
    
    
    //factorial
  for ( k = 1; k <= 10;)
  {
  factorial=factorial*k;
  k=k+1;}
 //checking prime
 for ( k = 1; k <=10; k++)
 {
    
 if (num%i==0)
 count++;
 if (count<=2)
 {
    sum_prime=sum_prime+pow(num,2)/factorial;
}
}
 
sum_total=(sum_total+pow(num,2)/factorial)-sum_prime;
 
    }
    printf("sum of the seires is %d",sum_total);
}