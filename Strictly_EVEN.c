#include <stdio.h>

int main() {
    int n, c = 1; 
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && (a[i] % 2 != 0 && a[i] != 0)) {
            c = 0;
            break; 
        }
    }

    if (c == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
