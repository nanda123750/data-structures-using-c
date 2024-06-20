#include <stdio.h>
void toh(int n, char A, char B, char C);
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Moves involved in Tower of Hanoi are:\n");
    toh(n, 'A', 'B', 'C');
    return 0;
}
void toh(int n, char A, char B, char C)
{
    if (n>=1)
    {
        toh(n - 1, A, C, B);
        printf("Move disk %d from pole %c to pole %c\n", n, A, C);
        toh(n - 1, B, A, C);
    }
    else
        printf("Move disk 1 from pole %c to pole %c\n", A, C);
}
