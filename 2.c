#include <stdio.h>
#include <stdlib.h>

int chiqar(int arr[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
}

int formula(int arr[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (i + j + 1 > 3)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    chiqar(array);
    formula(array);
    puts("");
    chiqar(array);

    return 0;
}