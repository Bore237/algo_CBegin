#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// import the local file for this source file
#include "sortAlgo.h"

/**
***************/
/*  DECLARATION OF STATIC FUNCTION */ /**************
                                       */

/**
 * @brief change the position of two position
 *
 * @param pcBuffer String that want to swap
 * @param index1  reference index
 * @param index2  second index
 */
static void fvSwapWord(int *piBuffer, int index1, int index2);

static int partition(int arr[], int low, int high);

/**
 **************/
/* IMPLEMENTATION OF STATIC FUNCTION */ /************
                                         */

/**
 * @brief change the position of two position
 *
 * @param pcBuffer Array that want to swap
 * @param index1  reference index
 * @param index2  second index
 */
static void fvSwapWord(int *piBuffer, int index1, int index2)
{
    // Do the local storage
    int cLocal = piBuffer[index1];
    // Change wordposition
    piBuffer[index1] = piBuffer[index2];
    piBuffer[index2] = cLocal;
}

/**
 **************/
/* IMPLEMENTATION OF GLOBAL FUNCTION   */ /************
                                           */

/**
 * @brief sort the array and use the selection sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortSelection(int *piIntBuffer, int iLength)
{
    // Init value
    int iStartCount = 0;
    int iIndexCurentMin = 0;
    int iCurentMin = piIntBuffer[0];
    iLength = iLength - 1;

    printf("The sort selection off this array is: \t");
    // Loop on the array items
    for (int i = 0; iStartCount <= iLength; i++)
    {
        // init curent min items
        iCurentMin = piIntBuffer[i];
        iIndexCurentMin = i;

        // Handle the start index of second counter
        iStartCount = i + 1;

        for (int j = iStartCount; j <= iLength; j++)
        {
            // move the current minimun
            if ((iCurentMin >= piIntBuffer[j]))
            {
                // Store the index of curent minimun and curent min value
                iIndexCurentMin = j;
                iCurentMin = piIntBuffer[j];
            }
        }

        // Position the min value in the great position
        fvSwapWord(piIntBuffer, i, iIndexCurentMin);

        printf("%d,  \t", piIntBuffer[i]);
    }

    printf("\n");
}

/**
 * @brief sort the array and use the insertion sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortInsert(int *piIntBuffer, int iLength)
{
    // Init value
    int iCurentVal = piIntBuffer[1];
    int iStartCount = 0;
    iLength = iLength - 1;

    printf("The insertion sort off this array is: \t");
    // Loop on the array items
    for (int i = 0; i <= iLength; i++)
    {
        iStartCount = i + 1;
        // Handle the start index of second counter
        iCurentVal = piIntBuffer[iStartCount];

        if (iStartCount <= iLength)
        {
            while ((iStartCount > 0))
            {
                iStartCount--;
                // Put the curent item to the well position to left
                if ((iCurentVal <= piIntBuffer[iStartCount]))
                {
                    fvSwapWord(piIntBuffer, iStartCount, (iStartCount + 1));
                    iCurentVal = piIntBuffer[iStartCount];
                }
            }
        }
    }

    // Display result
    for (int i = 0; i <= iLength; i++)
    {
        printf("%d,  \t", piIntBuffer[i]);
    }
    printf("\n");
}

/**
 * @brief sort the array and use the bubble sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength The length of input sort
 */
void vSortOfBubble(int *piIntBuffer, int iLength)
{
    // Init value
    int iStartCount = 0;
    int iCurentVal = piIntBuffer[0];
    iLength = iLength - 1;

    printf("The bubble sort  off this array is: \t");
    // Loop on the array items
    for (int i = 0; i <= iLength; i++)
    {
        // init curent min items
        iCurentVal = piIntBuffer[0];

        // Handle the start index of second counter
        iStartCount = 1;

        // itterate all the arry to pair an d swap the element if previous element
        // is great than next element
        for (int j = iStartCount; j <= iLength; j++)
        {
            // move the current minimun
            if ((iCurentVal >= piIntBuffer[j]))
            {
                // Swap the items
                fvSwapWord(piIntBuffer, (j - 1), j);
            }

            // actualise current value
            iCurentVal = piIntBuffer[j];
        }
    }

    // Display result
    for (int i = 0; i <= iLength; i++)
    {
        printf("%d,  \t", piIntBuffer[i]);
    }
    printf("\n");
}

static int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            fvSwapWord(arr, i, j);
        }
    }
    fvSwapWord(arr, (i + 1), high);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

/**
 * @brief sort the array and use the bubble sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param iLength length of array
 */
void vQuickSort(void *pvIntBuffer, int iLength)
{
    // Init the value
    int iMiddle = iLength / 2;

    // loop for realise the operation
}

int iFcatotial(int nbr){
    if(nbr > 0){
        return nbr * iFcatotial(nbr-1);
    }else{
        return 1;
    }
}