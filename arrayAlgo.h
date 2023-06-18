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
 * @param iSize the length of the vector
 * @param iTypeSize la taile du type de donnée
 * @return the addres that cotaint the sum of all the array
 */
float fSumArray(void *pvIntBuffer, int iSize, char cTypeElement);


/**
 * @brief find the max and mind in the arrea and return them 
 * 
 * @param pvOutBuffer 
 * @param pvIntBuffer 
 */
void vMaxMinArrea(void *pvOutBuffer, void *pvIntBuffer);


/**
 * @brief check if the string is a bIsPalindrome
 * 
 * @param pcWordBuffer the that you want to check
 * @return true  if is a bIsPalindrome
 * @return false if is not the bIsPalindrome
 */
bool bIsPalindrome(char* pcWordBuffer);


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
 * @param pcWordBuffer 
 * @return 
 */
char* pcInverseString(char *pcWordBuffer);


/**
 * @brief check if the  word is and anagram
 * 
 * @param pcWordBuffer the buffer that you want to check
 * @return true 
 * @return false 
 */
bool bIsAnagram(char *pcWordBuffer);


/**
 * @brief calculate the means  of arreas
 * 
 * @param pvIntBuffer 
 * @return  means of the arrays
 */
float fMeansArray(void *pvIntBuffer);


/**
 * @brief count the number of vowel in a word
 * 
 * @param pcWordBuffer 
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
 * @param pvFirstBuffer first array buffer
 * @param pvSecondBuffer second array buffer
 * @return  the buffer  that containt intersetion between two array 
 */
void* vIntersionOfArray(void *pvFirstBuffer, void *pvSecondBuffer);


/**
 * @brief count the number of permutation the ensembly
 * 
 * @param pvIntBuffer input array that you want to know numnber of permutation
 * @return  the number of permutation for this array 
 */
int iNberPermutation(void *pvIntBuffer);















#endif // ARRAYALGO_H_INCLUDED
