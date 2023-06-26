/**
 * @file arrayAlgo.h
 * @brief containt many array fonction to help you for the basy operation
 * @author Goudjou Borel
 * @version 1.0
 * @date
 */

#ifndef ARRAYALGO_H_INCLUDED
#define ARRAYALGO_H_INCLUDED

#include <stdbool.h>

/**
 * @brief Caculate the sum of arrea element
 *
 * @param pvIntBuffer is a input array
 * @param iTypeSize the size of type of data: 'i' for int and 'f' to float
 * @return the addres that cotaint the sum of all the array
 */
float *fSumMeanArray(void *pvIntBuffer, char cTypeElement);

/**
 * @brief find the max and mind in the arrea and return them
 *
 * @param pvIntBuffer is a input array
 * @param iTypeSize the size of type of data: 'i' for int and 'f' to float
 * @return the addres that cotaint the max(index 1) and min(index 0) of all the array
 */
float *fMaxMinArrea(void *pvIntBuffer, char cTypeElement);

/**
 * @brief check if the string is a bIsPalindrome
 *
 * @param pcWordBuffer the that you want to check
 * @return true  if is a bIsPalindrome
 * @return false if is not the bIsPalindrome
 */
bool bIsPalindrome(char *pcWordBuffer);

/**
 * @brief sort the array and use the selection sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param pvOutBuffer the sort array
 */
void vSortSelection(void *pvOutBuffer, void *pvIntBuffer);

/**
 * @brief inverse the words of the string
 *
 * @param pcWordBuffer : The adress of word that want to inverse it
 * @return the address of inverse word
 */
char *pcInverseString(char *pcWordBuffer);

/**
 * @brief check if two words are the anagram
 *
 * @param pcWordBuffer the word one
 * @param pcWordBuffer the word two
 * @return true if the two words are the anagram
 * @return false if the two words are not the anagram
 */
bool bIsAnagram(char *pcWordBuffer1, char *pcWordBuffer2);

/**
 * @brief count the number of vowel in a word
 *
 * @param pcWordBuffer  The input word
 * @return the vowel length
 */
int iNbrVowelOfWord(char *pcWordBuffer);

/**
 * @brief sort the array and use the bubble sort
 *
 * @param pvIntBuffer array that you want to sort
 * @param pvOutBuffer the sort array
 */
void vSortOfBubble(void *pvOutBuffer, void *pvIntBuffer);

/**
 * @brief Display the intersetion between two array
 *
 * @param pfResultBuffer will be containt the intersertion between two array
 * @param pfFirstBuffer first array buffer
 * @param pfSecondBuffer second array buffer
 * @return  the buffer  that containt intersetion between two array
 */
float *vIntersionOfArray(float *pfResultBuffer, float *pfFirstBuffer, float *pfSecondBuffer);

/**
 * @brief count the number of permutation the ensembly
 *
 * @param pvIntBuffer input array that you want to know numnber of permutation
 * @return  the number of permutation for this array
 */
int iNberPermutation(void *pvIntBuffer);

float fProduiscalaire(float *one, float two);

#endif // ARRAYALGO_H_INCLUDED
