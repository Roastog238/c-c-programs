#include <stdio.h>
// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
// Function to calculate sum of the series excluding prime numbers
float series_sum(int n) {
    float total = 1;  // Initialize total with the first term
    for (int i = 1; i <= n; i++) {
        if (!is_prime(i))  // Exclude prime numbers
            total += ((float)(i * i)) / factorial(i);
    }
    return total;
}
int main() {

    int n = 10;  // Change this value for different series lengths
    float result = series_sum(n);
    printf("Sum of the series excluding prime numbers: %.2f\n", result);
    return 0;
}
