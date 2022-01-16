#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: The first index where value is found otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
    int indexNumber = 0;

    if (array && size && value && value != ' ')
    {
        for (;indexNumber < (int)size ; indexNumber++)
        {
            printf("Value checked array[%d] = [%d]\n",indexNumber, array[indexNumber]);
            if (array[indexNumber] == value)
            {
                return (indexNumber);
            }
        }
        return -1;
    }
    else
        return -1;
}
