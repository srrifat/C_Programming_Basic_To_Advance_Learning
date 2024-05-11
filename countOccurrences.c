#include <stdio.h>
int countOccurrences(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {2, 3, 344, 34, 12, 3, 3, 5, 2, 3, 2, 4, 45, 2, 43, 43, 34, 435, 645};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int occerrences = countOccurrences(arr, size, x);
    printf("The number %d occers %d times in a the array.\n", x, occerrences);
    return 0;
}
