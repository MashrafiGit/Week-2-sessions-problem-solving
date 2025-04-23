#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    int findout = -1;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            findout = i;
            break;
        }
    }

    printf("%d", findout);

    return 0;
}