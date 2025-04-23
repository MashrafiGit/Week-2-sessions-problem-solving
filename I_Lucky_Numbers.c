#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int a = x / 10;
    int b = x % 10;

    if (b % a == 0 || a % 10 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}