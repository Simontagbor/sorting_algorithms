/*
 * 0-bubble_sort.c
 * Auth: Simon Tagbor <simontagbor360@gmail.com>
 *
 */

#include "sort.h"

/**
 * swap - Swap two integers in an array .
 *
 * @x: first integer to be swaped
 * @y: second integer to be swapped
 */

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j = size;

    if (array == NULL || size < 2)
        return;

    for(i=0; i < size - 1 ; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array + j, array + j + 1);
                print_array(array, size);
            }
        }

    }
}

