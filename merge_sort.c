#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[], int tmp[], int left, int right);
void merge(int arr[], int tmp[], int left, int right);
void print_array(int arr[], int size);

int main()
{
    // initiate arrays
    int myArray[] = {13, 72, 999, 5, 0, -17, 1337, 42, 22, 501, 108, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int *tmp = malloc(size * sizeof(int));

    print_array(myArray, size); // array before

    printf("Merging...\n\n");
    merge_sort(myArray, tmp, 0, size - 1);

    print_array(myArray, size); // array after

    free(tmp);
}

void merge_sort(int arr[], int tmp[], int left, int right)
{
    // check if not splitable
    if (left >= right)
        return;

    // split
    int mid = (right + left) / 2;
    merge_sort(arr, tmp, left, mid);
    merge_sort(arr, tmp, mid + 1, right);

    merge(arr, tmp, left, right);
}

void merge(int arr[], int tmp[], int left, int right)
{
    int mid = (right + left) / 2;

    // initialize indices, left half, right half, write position
    int index_right = mid + 1;
    int index_left = left;
    int index_write = left;

    // merge halfs
    // if neither half exhausted:
    while (index_left <= mid && index_right <= right)
    {
        if (arr[index_left] <= arr[index_right])
        {
            tmp[index_write++] = arr[index_left++];
        }
        else
        {
            tmp[index_write++] = arr[index_right++];
        }
    }

    // remainders left side:
    while (index_left <= mid)
    {
        tmp[index_write++] = arr[index_left++];
    }

    // remainders right side:
    while (index_right <= right)
    {
        tmp[index_write++] = arr[index_right++];
    }

    // copy to main array
    for (int i = left; i <= right; i++)
    {
        arr[i] = tmp[i];
    }
}

void print_array(int arr[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d%s", arr[i], (i == size - 1) ? "\n\n" : ", ");
}