#include "sort.h"
#include <stdio.h>
#include <stdlib.h>  // Include necessary header for malloc and free

/**
 * _calloc - this is a calloc function
 * @nmemb: number of elements
 * @size: bit size of each element
 * Return: pointer to memory assignment
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i = 0;
    char *p;

    if (nmemb == 0 || size == 0)
        return NULL;

    p = malloc(nmemb * size);
    if (p == NULL)
        return NULL;

    for (i = 0; i < (nmemb * size); i++)
        p[i] = 0;

    return p;
}

/**
 * merge - make a merge
 * @arr: one from start to mid
 * @tmp: temp array used in merge, was created outside to
 * optimize reducing the system calls
 * @start: first element position
 * @mid: array middle
 * @end: last element position
 */
void merge(int *arr, int *tmp, int start, int mid, int end)
{
    int size_left = mid - start + 1, size_right = end - mid;
    int *array_left, *array_right;
    int left, right, i = 0;

    array_left = &tmp[0];
    array_right = &tmp[size_lef
