#include <stdio.h>

int main()
{
    int n, rem, k = 0, j;
    scanf("%d", &n);
    int a[10];
    for (int i=n; n >= 0; )
    {
        rem = n % 2;
        a[k] = rem;
        k++;
        n/=2;
    }
    for (j = k - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}  