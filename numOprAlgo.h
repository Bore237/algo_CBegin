/**
 * @file numOprAlgo.h
 * @author Goudjou Borel
 * @brief handle the basic number mathematical operation
 * @version 0.1
 * @date 2023-06-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef NUMOPRALGO_H_INCLUDED
#define NUMOPRALGO_H_INCLUDED

#include <stdbool.h>


/**
 * @brief check if the number is first
 *
 * @param iTestNumber the number that we wont to check
 * @return true  if the number is first
 * @return false  if is and other number
 */
bool bIsFirtNumber(unsigned int  iTestNumber);


/**
 * @brief caculate the factorial of the word
 *
 * @param iTestnumber Input integer number
 * @return factorial of input number
 */
unsigned int iFatorialInt(unsigned int iTestnumber);


/**
 * @brief take the number of term and display the serie of fibonaccie
 *
 * @param iNumberTerm  number of term that you want to display
 */
void vDisplayFibonacci(int iNumberTerm);

/**
 * @brief calculate the power of number
 *
 * @param fNumber   is the number that we want to obtains power
 * @param iLevelPow   is the power number of the operation
 */
float vPowerNumber( float fNumber, int iLevelPow);

/**
 * @brief check if  the number is power of two
 *
 * @param iNumber the number that you want check
 * @return true   if is power of two
 * @return false  if is no power of two
 */
bool bIsPowerOfTwo(int iNumber);


/**
 * @brief check if the number is pecfect
 *
 * @param iNumber the integer that you want to check
 * @return true  if is a is pecfect number
 * @return false if is not a pecfect number
 */
bool bNumberIsPerfect(unsigned int  iNumber);

/**
 * @brief do the convertion the decimal number and binary number
 *
 * @param iNumber the integer that you want to convert
 * @return true if the convertion go well
 * @return false if the convertion fail
 */
bool bConvDecToBinary(unsigned int  iNumber);

/**
 * @brief check if the input data is the armstromg number
 *
 * @param iNumber he integer that you want to check
 * @return true   if is the  armstromg number
 * @return false  if is not armstromg number
 */
bool bIsArmstromgNumber(int iNumber);

int nombrechifreUnEntier(int valeurEntier);










#endif // NUMBEROPR_H_INCLUDED
