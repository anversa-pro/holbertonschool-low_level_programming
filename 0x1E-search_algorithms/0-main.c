#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int arrayOne[] = {10, 1, 42, 3, 4, 42, 6, 7, -5, 9};
    int arrayTwo[] = {' '};
    int arrayThree[] = {1};
    size_t size = sizeof(arrayOne) / sizeof(arrayOne[0]);
    size_t sizeTwo = sizeof(arrayTwo) / sizeof(arrayTwo[0]);
    size_t sizeThree = sizeof(arrayThree) / sizeof(arrayThree[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(arrayOne, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(arrayOne, size, 42));
    printf("Found %d at index: %d\n\n", 999, linear_search(arrayOne, size, 999));
    printf("Found %d at index: %d\n\n", -5, linear_search(arrayOne, size, -5));
    printf("Found %d at index: %d\n\n", 0, linear_search(arrayTwo, sizeTwo, 0));
    printf("Found ' ' at index: %d\n\n", linear_search(arrayThree, sizeThree, ' '));
    return (EXIT_SUCCESS);
}
