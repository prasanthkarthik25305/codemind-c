#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int b = 0, c = 1, d = 0, B = 0, C = 0, D = 0, min = 0, max = 0, i;

    for (i = 1;; i++)
    {
        if (a == b || a == c || a == d)
        {
            printf("%d", a);
            break;
        }

        if ((b + c) > a)
        {
            min = c;
            B = b;
            C = c;
            D = d;
            break;
        }

        b = c;
        c = d;
        d = b + c;
    }

    for (i = 1;; i++)
    {
        if (D > a)
        {
            max = D;
            break;
        }

        B = C;
        C = D;
        D = B + C;
    }

    if ((a - min) > (max - a))
    {
        printf("%d", max);
    }
    else if ((a - min) == (max - a))
    {
        printf("%d %d", min, max);
    }
    else if ((a - min) < (max - a))
    {
        printf("%d", min);
    }

    return 0;
}
