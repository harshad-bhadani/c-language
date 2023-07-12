#include <stdio.h>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10], size;
    printf("enter the size of array");
    scanf("%d", &size);

    printf("Enter integers:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, size);
    printf("Sum of the array: %d\n", result);

    return 0;
}