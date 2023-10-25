#include <stdio.h>

int is_prime_recursive(int n, int i) {
    if (n <= 1) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return is_prime_recursive(n, i - 1);
}

int is_prime_number(int n) {
    return is_prime_recursive(n, n - 1);
}

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime_number(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

