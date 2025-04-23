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

    // 1-N print(loop)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // N-1 print(loop)
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // 1-N(positive) or N-0(negative) print depend on N value (loop)
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\n");

    // sum of positive and negative from array (array)
    int pos_sum = 0, neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (0 < a[i])
        {
            pos_sum += a[i];
        }
        else if (0 > a[i])
        {
            neg_sum += a[i];
        }
    }
    printf("Sum of Positive = %d\nSum of Negative = %d", pos_sum, neg_sum);

    return 0;
}