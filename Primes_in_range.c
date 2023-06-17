#include<stdio.h>
#include<stdlib.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
        
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int n, m, k = 0;
    scanf("%d %d", &n, &m);
    
    if ((n != 0 && m != 0) || n == m) {
        n = abs(n);
        m = abs(m);
        
        for (int i = n; i <= m; i++) {
            if (isPrime(i))
                k++;
        }
        
        printf("%d", k);
    } else {
        printf("0");
    }
    
    return 0;
}
