#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int m;
    scanf("%d",&m);
    int index[m];
    for (int i = 0; i < n; i++) {
        scanf("%d", &index[i]);
    }

    int target[n];

    for (int i = 0; i < n; i++) {
        target[i] = 0; 
    }

    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int idx = index[i];

        for (int j = n - 1; j > idx; j--) {
            target[j] = target[j - 1];
        }

        target[idx] = num;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", target[i]);
    }

    return 0;
}
