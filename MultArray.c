#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
        printf("Teh multiplication will be 5 X %d = %d \n", (i + 1), arr[i]);
    }
}