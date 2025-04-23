#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            printf("%c ", 'A'+i);
        }
      printf("\n");  
    }

    return 0;
}