#include <stdio.h>

int isUgly(int n) {
    while (n % 2 == 0) {
        n = n / 2;
    }
    while (n % 3 == 0) {
        n = n / 3;
    }
    while (n % 5 == 0) {
        n = n / 5;
    }

    return n == 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isUgly(num)) {
        printf("Ugly Number
");
    } else {
        printf("Not Ugly Number
");
    }

    return 0;
}
