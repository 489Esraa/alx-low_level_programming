#include "search_algos.h"

/**
 * binary_search - earches for a value in a sorted array of integers using the Binary search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value){
    if (array == NULL)
        return (-1);
    size_t i, l, h, m;

    l = 0;
    h = size - 1;
    while(l <= h)
    {
        for(i = l; i <= h; i++)
        {
            printf("Searching in array: array[ld]", array[i]);
            if(i != h)
                printf(", ");
            else
            printf('\n');
        }
    mid = l + (h - l) / 2;
    if (array[mid] == value)
        return (mid);
    else if (array[mid] > value)
    {
        h = mid -1;
    }
    else
    {
        l = mid + 1;
    }
    }
    return (-1);
}