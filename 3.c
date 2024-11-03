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
    int index = 0, katta = 0;
    for (size_t i = 0; i < 3; i++)
    {
        katta = arr[i][0];
        for (size_t j = 0; j < 3; j++)
        {
            if (katta < arr[i][j])
            {
                katta = arr[i][j];
            }
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (katta > arr[i][j])
            {
                index++;
            }
        }
    }
    printf(" kattagacha bolgan sonlar nechtaligi ==> %dta", index);
}

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    chiqar(array);
    formula(array);
    return 0;
}