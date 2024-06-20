#include <stdio.h>
int fact(int n);

int main()
{
    int n, r;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    r = fact(n);
    printf("FACTORIAL IS: %d\n", r);
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (fact(n - 1) * n);
}
