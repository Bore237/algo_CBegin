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
bool bIsFirtNumber(unsigned int iTestNumber);

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
float vPowerNumber(float fNumber, int iLevelPow);

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
bool bNumberIsPerfect(unsigned int iNumber);

/**
 * @brief do the convertion the decimal number and binary number
 *
 * @param iNumber the integer that you want to convert
 * @return true if the convertion go well
 * @return false if the convertion fail
 */
bool bConvDecToBinary(unsigned int iNumber);

/**
 * @brief check if the input data is the armstromg number
 *
 * @param iNumber he integer that you want to check
 * @return true   if is the  armstromg number
 * @return false  if is not armstromg number
 */
bool bIsArmstromgNumber(int iNumber);

/**
 * @brief Count the number of digit for enteger number
 *
 * @param iIntergerValue Input value that will want to know the digit number
 * @return the number of digit to  the interger
 */
int iNbrDigitToInteger(int iIntergerValue);

/**
 * @brief check if the number return to one follow a sequence
 *
 * @example (principe) if is an old number (3*nber + 1) else if an event number (nber/2)
 * if the number arrive to one he can't increase he blocked between 4, 2 and 1.
 * but the execption exist: N = 4k + 1, N=16k+7, N=16k+11 et N=16k+15
 */
bool bIsSeriOfCollatz(int iCheckNber);

/**
 * @brief Determinate how many digit that have input fibonaci serie
 *
 * @param iNumberTerm  The arry who containt fibonacci element
 * @param iLength The length of array
 * @return The number of digit that containt this serie
 */
int iNbrDigitFibonacci(int *iNumberTerm, int iLength);

// {0, 1, 2, 3, 5,      8,      13,     21,     34,
// 55,     89,     144,    233,    377,
// 610,    987,    1597,   2584,   4181,
// 6765,   10946,  17711,  28657,  46368,
// 75025,  121393,         196418,         317811,         514229,
// 832040,         1346269,        2178309,        3524578,        5702887,
// 9227465,        14930352,       24157817,       39088169,       63245986,
// 102334155,      165580141,      267914296,      433494437,      701408733,
// 1134903170,     1836311903,     2971215073,     512559680,      3483774753,
// 3996334433,     3185141890,     2886509027,     1776683621,     368225352,
// 2144908973,     2513134325,     363076002,      2876210327,     3239286329,
// 1820529360,     764848393,      2585377753,     3350226146,     1640636603,
// 695895453,      2336532056,     3032427509,     1073992269,     4106419778}
#endif // NUMBEROPR_H_INCLUDED
