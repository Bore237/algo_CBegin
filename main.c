#include <stdio.h>
#include <stdlib.h>

/* include local file */
#include "numOprAlgo.h"
#include "arrayAlgo.h"


int main()
{
    /* */
    printf(" The result of number function \n  \n");
//    bIsFirtNumber(6);
//    iFatorialInt(5);
//    vPowerNumber(2,8);
//    bIsPowerOfTwo(6);
//    bNumberIsPerfect(33550336);
//    bConvDecToBinary(602);

/////*  Array function *//////
    printf(" The result of array function \n \n");
    // Init the variables
    int tab[5] = {8,3,3,4,5};
    char strPalindrone[]="radar";
    char strAnagram1[] = "Migraine";
    char strAnagram2[] = "Imaginer";
    float *pfIntersetion;
    float A[9]={1, 4, 5, 8, 10, 34, 100};
    float B[9]={3, 2, 7, 10, 25, 26, 27, 34, 100};
    char pvIntBuffer[]="CELpUkmy";

    //Call local function
    float* resultarray = fSumMeanArray(tab,'i');
    float* maxmin = fMaxMinArrea(tab, 'i');
    bIsPalindrome(strPalindrone);
    pcInverseString(strPalindrone);
    bIsAnagram(strAnagram1, strAnagram2);
    int nbrVoyel = iNbrVowelOfWord(strAnagram1);
    pfIntersetion = vIntersionOfArray(pfIntersetion, A, B);
    int nbrPosssi = iNberPermutation(pvIntBuffer, 'c');

    /* display result */
    printf("the sum of vector is: %f \n the mean of vector is: %f \n", resultarray[0], resultarray[1]);
    printf("the min of vector is: %f and max is %f\n", maxmin[0], maxmin[1]);
    printf("The number of vowel is: %d\n", nbrVoyel);
    printf("The number of possibility is: %d", nbrPosssi);
    return 0;
}
