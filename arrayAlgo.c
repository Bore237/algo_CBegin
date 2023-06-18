#include "arrayAlgo.h"
#include <stdio.h>
#include <stdlib.h>

//import the local file for this source file
#include "arrayAlgo.h"




/**
 * @brief Caculate the sum of arrea element
 *
 * @param pvIntBuffer is a input array
 * @param iSize the length of the vector
 * @param iTypeSize la taile du type de donnée
 * @return the addres that cotaint the sum of all the array
 */
float fSumArray(void *pvIntBuffer, int iSize, char cTypeElement){
    /* init the accumulator varable */
    float fSomme =0;

    /* Caster this void pointer to charfor use it */
    char *pfBuffer = (char*) pvIntBuffer;


    /* Check the type of element */
    if (cTypeElement == 'i') {
        int *tableauEntier = pvIntBuffer;
        /* loop and do the sum of element */
        for (int i = 0; i < iSize; i++) {
            fSomme += tableauEntier[i];
        }
    } else if (cTypeElement == 'f') {
        float *tableauFlottant = pvIntBuffer;
        /* loop and do the sum of element */
        for (int i = 0; i < iSize; i++) {
            fSomme += tableauFlottant[i];
        }
    }

    return fSomme;
}
