/**
 * @file sortAlgo.h
 * @brief containt many sort fonction to help you for the basy operation
 * @author Goudjou Borel
 * @version 1.0
 * @date 6/27/2023
 */

#ifndef SORTALGO_H_INCLUDED
#define SORTALGO_H_INCLUDED

#include <stdbool.h>

/**
 * @brief sort the array and use the selection sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortSelection(int *piIntBuffer, int iLength);

/**
 * @brief sort the array and use the insertion sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortInsert(int *piIntBuffer, int iLength);

/**
 * @brief sort the array and use the bubble sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortOfBubble(int *piIntBuffer, int iLength);

/**
 * @brief sort the array and use the bubble sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength length of array
 */
void vQuickSort(void *pvIntBuffer, int iLength);

void quickSort(int arr[], int low, int high);

#endif // SORTALGO_H_INCLUDED