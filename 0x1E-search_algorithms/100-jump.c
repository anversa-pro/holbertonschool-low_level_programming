#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: The index where value is found otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
    int jumpBlock;

    if (array && size && value && value != ' ')
        jumpblock = sqtr(size);
    else
        return (-1);
}