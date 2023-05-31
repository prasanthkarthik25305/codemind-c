#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int last_odd_index = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            last_odd_index = i;
            break;
        }
    }

    printf("%d", last_odd_index);

    return 0;
}
