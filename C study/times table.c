#include <stdio.h>

int main()
{
    for (int i=2; i<=9; i++)
    {
        printf(" %d단 계산\n", i);
        for (int j=2; j<=9; j++)
        {
            printf(" %d x %d = %d\n", i, j, i*j);
        }
    }
    
    return 0;
}