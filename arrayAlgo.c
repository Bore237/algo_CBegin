#include "arrayAlgo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// import the local file for this source file
#include "arrayAlgo.h"

/*
 *  Define varible
 */
#define INDEX_MIN 0
#define INDEX_MAX 1

/**
 * @brief Caculate the sum of arrea element
 *
 * @param pvIntBuffer is a input array
 * @param iSize the length of the vector
 * @param iTypeSize la taile du type de donnée
 * @return the addres that cotaint the sum of all the array
 */
float fSumArray(void *pvIntBuffer, int iSize, char cTypeElement)
{
    /* init the accumulator varable */
    float fSomme = 0;

    /* Caster this void pointer to charfor use it */
    char *pfBuffer = (char *)pvIntBuffer;

    /* Check the type of element */
    if (cTypeElement == 'i')
    {
        int *tableauEntier = pvIntBuffer;
        /* loop and do the sum of element */
        for (int i = 0; i < iSize; i++)
        {
            fSomme += tableauEntier[i];
        }
    }
    else if (cTypeElement == 'f')
    {
        float *tableauFlottant = pvIntBuffer;
        /* loop and do the sum of element */
        for (int i = 0; i < iSize; i++)
        {
            fSomme += tableauFlottant[i];
        }
    }

    return fSomme;
}

/**
 * @brief find the max and mind in the arrea and return them
 *
 * @param pvIntBuffer is a input array
 * @param iSize the length of the vector
 * @param iTypeSize la taile du type de donnée
 * @return the addres that cotaint the max(index 1) and min(index 0) of all the array
 */
float *fMaxMinArrea(void *pvIntBuffer, int iSize, char cTypeElement)
{
    /* init the accumulator varable */
    static float fMaxMinVector[2] = {0, 0};

    /* Caster this void pointer to charfor use it */
    char *pfBuffer = (char *)pvIntBuffer;

    /* Check the type of element */
    if (cTypeElement == 'i')
    {
        int *tableauEntier = pvIntBuffer;
        fMaxMinVector[INDEX_MIN] = tableauEntier[0];
        /* loop and do the search the max and min of element */
        for (int i = 0; i < iSize; i++)
        {
            if (tableauEntier[i] > fMaxMinVector[INDEX_MAX])
            {
                fMaxMinVector[INDEX_MAX] = tableauEntier[i];
            }
            else if (tableauEntier[i] < fMaxMinVector[INDEX_MIN])
            {
                fMaxMinVector[INDEX_MIN] = tableauEntier[i];
            }
        }
    }
    else if (cTypeElement == 'f')
    {
        float *tableauFlottant = pvIntBuffer;
        /* loop and do the search the max and min of element  */
        for (int i = 0; i < iSize; i++)
        {
            if (tableauFlottant[i] > fMaxMinVector[INDEX_MAX])
            {
                fMaxMinVector[INDEX_MAX] = tableauFlottant[i];
            }
            else if (tableauFlottant[i] < fMaxMinVector[INDEX_MIN])
            {
                fMaxMinVector[INDEX_MIN] = tableauFlottant[i];
            }
        }
    }

    return fMaxMinVector;
}

/**
 * @brief check if the string is a bIsPalindrome
 *
 * @param pcWordBuffer the that you want to check
 * @return true  if is a bIsPalindrome
 * @return false if is not the bIsPalindrome
 */
bool bIsPalindrome(char *pcWordBuffer)
{
    // fing the length of word
    int iLength = strlen(pcWordBuffer) - 1;

    // Do the loop of the word
    for (int i = 0; i < (iLength / 2); i++)
    {
        if (pcWordBuffer[i] == pcWordBuffer[iLength - i])
        {
        }
        else
        {
            printf("Ce mot n'est pas un Palindome ");
            return false;
        }
    }
    printf("Ce mot est un Palindrome \n");
    return true;
}

