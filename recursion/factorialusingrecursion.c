#include <stdio.h>
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Asking user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculating factorial and printing the result
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

