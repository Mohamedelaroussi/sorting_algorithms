#include "sort.h"

/**
 * bubble_sort - sort array elements from min to max value
 * @arr: array
 * @len: array size
 */
void bubble_sort(int *arr, size_t len)
{
    size_t i, j;
    int temp;

    if (len < 2)
        return;

    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                print_array(arr, len);
            }
        }
    }
}
