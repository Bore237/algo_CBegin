#include <stdio.h>
#include <stdlib.h>

/* include local file */
#include "numOprAlgo.h"
#include "arrayAlgo.h"


int main()
{
//    bIsFirtNumber(6);
//    iFatorialInt(5);
//    vPowerNumber(2,8);
//    bIsPowerOfTwo(6);
//    bNumberIsPerfect(33550336);
//    bConvDecToBinary(602);
    int tab[5] = {1,2,3,4,5};
    char strPalindrone[]="radar";
    char strAnagram1[] = "Migraineeo";
    char strAnagram2[] = "Imaginer";


//    float SumArray  =0;
//    SumArray = fSumArray(tab, 5, 'i');
//    float* maxmin = fMaxMinArrea(tab, 5, 'i');
//
//        /* Display result */
//    printf("The sum of vector is: %f\n", SumArray);
//    printf("The min of vector is: %f and max is %f\n", maxmin[0], maxmin[1]);
//    bIsPalindrome(strPalindrone);
//    pcInverseString(strPalindrone);
    bIsAnagram(strAnagram1, strAnagram2);
    float meanArray = fMeansArray(tab, 5,'i');
    int nbrVoyel = iNbrVowelOfWord(strAnagram1);
    printf("The mean of vector is: %d\n", nbrVoyel);
    return 0;
}
