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
    for (int i = 0; i <= iLength; i++)
    {
        // init curent min items
        iCurentMin = piIntBuffer[i];
        iIndexCurentMin = i;

        // Handle the start index of second counter
        iStartCount = i + 1;
        if (iStartCount < iLength)
        {
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
        }

        printf("%d,  \t", iCurentMin);
    }

    printf("\n");
}
