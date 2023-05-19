#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to check if all digits in a number are prime
bool allDigitsArePrime(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!isPrime(digit)) {
            return false;
        }
        num /= 10;
    }
    return true;
}

// Function to check if a number is a "mega prime"
bool isMegaPrime(int num) {
    return isPrime(num) && allDigitsArePrime(num);
}

int main() {
    int n;
    scanf("%d", &n);
    if (isMegaPrime(n)) {
        printf("Mega Prime
");
    } else {
        printf("Not Mega Prime");
    }

    return 0;
}
