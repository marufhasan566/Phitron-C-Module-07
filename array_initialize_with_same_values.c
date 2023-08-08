#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        // printf("%d\n", array[i]);
        array[i] = 100;
    }
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        printf(" arr[%d] = %d\n", i, array[i]);
    }

    return 0;
}