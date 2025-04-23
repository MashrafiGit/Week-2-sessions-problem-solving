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

    
    // print all the values of Array at even_indexes in reverse way. (index starts from 0 or 0 index based)
    for (int i = n - 1; i >= 0; i = i - 2)
    {
        printf("%d ", a[i]);
    }


    // update or modify index'th value then print reverse
    int x, y;
    scanf("%d %d", &x, &y);
    a[x] = y;

    printf("\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }


    return 0;
}