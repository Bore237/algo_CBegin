#include <stdio.h>
#include <stdlib.h>

/* include local file */
#include "numOprAlgo.h"
#include "arrayAlgo.h"
#include "sortAlgo.h"

int main()
{
    /* */
    printf(" The result of number function \n  \n");
    int iFibonaci[] ={0,1,1, 2, 3, 5,      8,      13,     21,     34,
                    55,     89,     144,    233,    377,
                    610,    987,    1597,   2584,   4181,
                    6765,   10946,  17711,  28657,  46368,
                    75025,  121393,         196418,         317811,         514229,
                    832040,         1346269,        2178309};
    //    bIsFirtNumber(6);
    //    iFatorialInt(5);
    //    vPowerNumber(2,8);
    //    bIsPowerOfTwo(6);
    //    bNumberIsPerfect(33550336);
    //    bConvDecToBinary(602);
    int iNbrDigit = iNbrDigitToInteger(789);
    bIsArmstromgNumber(153);
    vDisplayFibonacci(70);
    int iLength = sizeof(iFibonaci)/ sizeof(iFibonaci[0]);
    int iFibDigit = iNbrDigitFibonacci(iFibonaci, sizeof(iFibonaci)/ sizeof(int));

    printf("The number of digit is %d \n", iNbrDigit);
    printf("\n fibonaci de %d element a %d digit.", iLength, iFibDigit);

    /////*  Array function *//////
    printf(" The result of array function \n \n");
    // Init the variables
    int tab[5] = {8, 3, 3, 4, 5};
    char strPalindrone[] = "radar";
    char strAnagram1[] = "Migraine";
    char strAnagram2[] = "Imaginer";
    float *pfIntersetion;
    float A[9] = {1, 4, 5, 8, 10, 34, 100};
    float B[9] = {3, 2, 7, 10, 25, 26, 27, 34, 100};
    float fVectU1[] = {2,3,4};
    float fVectU2[] = {1,-2,2};
    char pvIntBuffer[] = "CELLULE";
    char cString[] = "(()))";

    // Call local function
    float *resultarray = fSumMeanArray(tab, 'i');
//    float *maxmin = fMaxMinArrea(tab, 'i');
//    bIsPalindrome(strPalindrone);
//    pcInverseString(strPalindrone);
//    bIsAnagram(strAnagram1, strAnagram2);
//    int nbrVoyel = iNbrVowelOfWord(strAnagram1);
//    pfIntersetion = vIntersionOfArray(pfIntersetion, A, B);
//    int nbrPosssi = iNberPermutation(pvIntBuffer, 'c');
    float fProdResul = fProdScal((float*)fVectU1, (float*)fVectU2, sizeof(fVectU2)/sizeof(float));
    bIsParenthesisBalance(cString, '(', ')');

    /* display result */
//    printf("the sum of vector is: %f \n the mean of vector is: %f \n", resultarray[0], resultarray[1]);
//    printf("the min of vector is: %f and max is %f\n", maxmin[0], maxmin[1]);
//    printf("The number of vowel is: %d\n", nbrVoyel);
//    printf("The number of possibility is: %d \n", nbrPosssi);
    printf("The scalar product  of two vector is: %f \n", fProdResul);


    /////*  Sort function *//////
    printf(" \n The result of sort function \n \n");
    // Value that we want to sort
    int iSelectArray[]={3,6,1,8,4,5};
    int iInsertArray[]={4,3,2,10,12,1,5,6};
    int iBubbeArray[]={5,1,6,2,4,3};
    int iLengthSelectSort = sizeof(iSelectArray)/sizeof(int);
    int iLengthInsertSort = sizeof(iInsertArray)/sizeof(int);
    int iLengthBubbeSort = sizeof(iBubbeArray)/sizeof(int);

    int arr[] = {35, 33, 42, 10, 14, 19, 27,44,26,31};
    int n = sizeof(arr) / sizeof(arr[0]);

    // different sort function
    vSortSelection(iBubbeArray , iLengthSelectSort );
    vSortInsert(iInsertArray, iLengthInsertSort);
    vSortOfBubble(iSelectArray, iLengthBubbeSort);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
