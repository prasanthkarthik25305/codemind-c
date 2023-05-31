#include <stdio.h>

int main() {
    int n, s;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    s = a[0];  // Assume the first number as the largest initially

    for (int i = 1; i < n; i++) {
        if (a[i] > s) {
            s = a[i];  // Update the largest number if a larger one is found
        }
    }

    printf("%d", s);

    return 0;
}
