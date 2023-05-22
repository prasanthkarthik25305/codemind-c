#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int c[n];
    int count;
    int repeat = 0; 
    
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        
        if (count == 1) {
            c[repeat] = a[i];
            repeat++;
        }
    }
    
    if (repeat == 0) {
        printf("-1"); 
    } else {
        for (int i = 0; i < repeat; i++) {
            printf("%d ", c[i]);
        }
    }
    
    return 0;
}
