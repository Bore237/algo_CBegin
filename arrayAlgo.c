#include "arrayAlgo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// import the local file for this source file
#include "arrayAlgo.h"
#include "numOprAlgo.h"

/**
***************/
/*  DEFINITION OF VARIABLE */ /**********************
                               */
#define INDEX_MIN 0
#define INDEX_MAX 1

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
static void fvSwapWord(char *pcBuffer, int index1, int index2);

/**
 * @brief Renturn the length of array
 *
 * @param pvArray  Imput Array
 * @param cTypeVar type of Array
 * @return int     length of array
 */
static int iLengthArray(void *pvArray, char cTypeVar);

/**
 **************/
/* IMPLEMENTATION OF STATIC FUNCTION */ /************
                                         */

/**
 * @brief change the position of two position
 *
 * @param pcBuffer String that want to swap
 * @param index1  reference index
 * @param index2  second index
 */
static void fvSwapWord(char *pcBuffer, int index1, int index2)
{
    // Do the local storage
    char cLocal = pcBuffer[index1];
    // Change wordposition
    pcBuffer[index1] = pcBuffer[index2];
    pcBuffer[index2] = cLocal;
}

/**
 * @brief Renturn the length of array
 *
 * @param pvArray  Imput Array
 * @param cTypeVar type of Array
 * @return int     length of array
 */
static int iLengthArray(void *pvArray, char cTypeVar)
{
    // Init the count
    int iCount = 0;
    // Choose the choose of variable
    if (cTypeVar == 'f')
    {
        float *pfArr = (float *)pvArray;
        while (*pfArr != '\0')
        {
            iCount++;
            pfArr++;
        }
    }
    else if (cTypeVar == 'i')
    {
        int *pcArr = (int *)pvArray;
        while (*pcArr != '\0')
        {
            iCount++;
            pcArr++;
        }
    }
    else
    {
        return 0;
    }

    return iCount;
}
/**
*************/
/*  IMPLEMENTATION OF GLOBAL FUNCTION   */ /***********
                                            */

/**
 * @brief Caculate the sum of arrea element and calculate the means  of arreas
 *
 * @param pvIntBuffer is a input array
 * @param iTypeSize la taile du type de donnée
 * @return the addres that cotaint the sum of all the array
 */
float *fSumMeanArray(void *pvIntBuffer, char cTypeElement)
{
    // Calculate the size of array
    int iSize = iLengthArray((void *)pvIntBuffer, cTypeElement);

    /* Array who containt the result*/
    static float fResult[2];
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

    // handle result
    fResult[0] = fSomme;
    fResult[1] = (float)(fSomme / iSize);

    return fResult;
}

/**
 * @brief find the max and mind in the arrea and return them
 *
 * @param pvIntBuffer is a input array
 * @param cTypeElement the size of type of data: 'i' for int and 'f' to float
 * @return the addres that cotaint the max(index 1) and min(index 0) of all the array
 */
float *fMaxMinArrea(void *pvIntBuffer, char cTypeElement)
{
    // Calculate the size of array
    int iSize = iLengthArray((void *)pvIntBuffer, cTypeElement);

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
        if (pcWordBuffer[i] != pcWordBuffer[iLength - i])
        {
            printf("Ce mot n'est pas un Palindrome \n");
            return false;
        }
    }
    printf("Ce mot est un Palindrome \n");
    return true;
}

/**
 * @brief inverse the words of the string
 *
 * @param pcWordBuffer : The adress of word that want to inverse it
 * @return the address of inverse word
 */
char *pcInverseString(char *pcWordBuffer)
{
    // find the length of the word
    int iLength = strlen(pcWordBuffer);

    //  Create the string that will be containt the inverse word
    char *pcInverseWord = malloc(sizeof(char[iLength]));

    // loop for inverse the word
    printf("Tne inverse word is:");
    for (int i = 0; i < iLength; i++)
    {
        pcInverseWord[i] = pcWordBuffer[iLength - (i + 1)];
        // Display result
        printf("%c ", pcInverseWord[i]);
    }
    printf("\n");
    return pcInverseWord;
}

/**
 * @brief check if two words are the anagram
 *
 * @param pcRefWord the word one
 * @param pcCompareWord the word two
 * @return true if the two words are the anagram
 * @return false if the two words are not the anagram
 */
bool bIsAnagram(char *pcRefWord, char *pcCompareWord)
{
    // find the length of two word
    int iLength1 = strlen(pcRefWord);
    int iLength2 = strlen(pcCompareWord);
    bool bStateIn = false;

    // check if the words have the same length
    if (iLength1 != iLength2)
    {
        printf("The two words are not the analgram off \n");
        return false;
    }

    // loop and chech if the two words have the same characters
    for (int i = 0; i < iLength1; i++)
    {
        for (int j = i; j < iLength1; j++)
        {
            if (tolower(pcRefWord[i]) == tolower(pcCompareWord[j]))
            {
                fvSwapWord(pcCompareWord, i, j);
                bStateIn = true;
                break;
            }
        }
        if (bStateIn == false)
        {
            printf("The two words are not the analgram on \n");
            return false;
        }
        bStateIn = false;
    }

    printf("The two words are the analgram \n");
    return true;
}

/**
 * @brief count the number of vowel in a word
 *
 * @param pcWordBuffer  The input word
 * @return the vowel length
 */
int iNbrVowelOfWord(char *pcWordBuffer)
{
    // init the counter of voyel
    int iVoyelCount = 0;
    int length = strlen(pcWordBuffer);
    // do the while loop and check the voyelle
    for (size_t i = 0; i < length; i++)
    {
        switch (tolower(pcWordBuffer[i]))
        {
        case 'a':
            iVoyelCount++;
            break;
        case 'e':
            iVoyelCount++;
            break;
        case 'u':
            iVoyelCount++;
            break;
        case 'i':
            iVoyelCount++;
            break;
        case 'o':
            iVoyelCount++;
            break;
        default:
            break;
        }
    }

    return iVoyelCount;
}

/**
 * @brief Display the intersetion between two array
 *
 * @param pfResultBuffer will be containt the intersertion between two array
 * @param pfFirstBuffer first array buffer
 * @param pfSecondBuffer second array buffer
 * @return  the buffer  that containt intersetion between two array
 */
float *vIntersionOfArray(float *pfResultBuffer, float *pfFirstBuffer, float *pfSecondBuffer)
{
    // find the length of two array
    int iCountRes = 0;
    int iLength1 = iLengthArray((void *)pfFirstBuffer, 'f');
    int iLength2 = iLengthArray((void *)pfSecondBuffer, 'f');

    // Creer a table who containt intersertion number
    pfResultBuffer = malloc(sizeof(float[iLength1]));

    // loop and chech if the two words have the same characters
    printf("intersion sont: ");
    for (int i = 0; i < iLength1; i++)
    {
        for (int j = iCountRes; j < iLength2; j++)
        {
            if (pfFirstBuffer[i] == pfSecondBuffer[j])
            {
                fvSwapWord(pfSecondBuffer, i, j);
                pfResultBuffer[++iCountRes] = pfFirstBuffer[i];
                printf(" %f, ", pfFirstBuffer[i]);
                break;
            }
        }
    }
    printf("\n ");
    return pfResultBuffer;
}

/**
 * @brief count the number of permutation the ensembly
 *
 * @param pvIntBuffer input array that you want to know numnber of permutation
 * @param cTypeElement the size of type of data: 'i' for int, 'c' for char and 'f' to float
 * @return  the number of permutation for this array
 */
int iNberPermutation(void *pvIntBuffer, char cTypeElement)
{
    // Init variable
    int iCount = 0;
    int iNbrRedondance = 1;
    int iFixPos = 0;
    int iProdFactorial = 1;
    int iSize = 0;

    // the number of possibility is fatorial
    if (cTypeElement != 'c')
    {
        // Calculate the size of array
        iSize = iLengthArray((void *)pvIntBuffer, cTypeElement);

        // Convert to the float type
        float *pfArray = (float *)pvIntBuffer;
    }
    else
    {
        // Convert to the float type
        char *pfArray = (char *)pvIntBuffer;

        // Calculate the size of array
        iSize = strlen(pfArray);
        printf("\n size %d \n", iSize);

        // Check if the array have the redundace value
        while (iCount < iSize)
        {
            // Take the fix position and increase current count
            iFixPos = iCount;
            iCount++;
            // Loop for find if the array has a redondance element
            for (int j = iCount; j < iSize; j++)
            {
                if (pfArray[iFixPos] == pfArray[j])
                {
                    fvSwapWord(pfArray, (iCount), j);
                    iNbrRedondance++;
                    iCount++;
                }
            }
            // If the redondance happen skip to the next position
            if ((iCount - iFixPos) > 1)
            {
                iProdFactorial = iProdFactorial * iFatorialInt(iNbrRedondance);
                // Reset redondance count
                iNbrRedondance = 1;
            }
        }
    }

    // if the ensembly have the repily the nbr of poss is n!/k!
    return (iFatorialInt(iSize) / iProdFactorial);
}
