#include <stdio.h>

// Function to check if a number is prime
int is_prime_number(int n) {
    // Base cases
    if (n <= 1) return 0; // 0 and 1 are not prime
    if (n <= 3) return 1; // 2 and 3 are prime

    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return 0;

    // Check for prime using 6k +/- 1 rule
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1; // If no divisors are found, n is prime
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime_number(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

