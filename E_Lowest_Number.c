#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int val = 1e5 + 1;
    int inx = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < val)
        {
            val = a[i];
            inx = i + 1;
        }
    }

    printf("%d %d", val, inx);

    return 0;
}