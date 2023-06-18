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

    float SumArray  =0;
    SumArray = fSumArray(tab, 5, 'i');

        /* Display result */
    printf("The sum of vector is: %f\n", SumArray);
    return 0;
}
