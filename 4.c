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
    int index = 0, kichik = 0;
    for (int i = 0; i < 3; i++)
    {
        kichik = arr[0][0];
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < kichik)
            {
                kichik = arr[i][j];
            }
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (kichik < arr[i][j])
            {
                index++;
            }
        }
    }
    printf(" kichikdan keyin necha son borligi ==> %dta", index);
}

int main()
{
    system("cls");
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    chiqar(array);
    formula(array);
    return 0;
}