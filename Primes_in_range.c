#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int count_primes(int m, int n) {
    int count = 0;

    for (int num = m; num <= n; num++) {
        count += is_prime(num);
    }

    return count;
}

int main() {
    int m, n;

   // printf("Enter the value of m: ");
    scanf("%d", &m);

   // printf("Enter the value of n: ");
    scanf("%d", &n);

    int prime_count = count_primes(m, n);
    printf("%d
",prime_count);

    return 0;
}
