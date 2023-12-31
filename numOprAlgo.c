#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//import the local file for this source file
#include "numOprAlgo.h"



/**
 * @brief check if the number is first
 *
 * @param iTestNumber the number that we wont to check
 * @return true  if the number is first
 * @return false  if is and other number
 */
bool bIsFirtNumber(unsigned int iTestNumber){
    /* init the counter of division without rest */
    int iCountDiv = 0;

    /* loop of the all element before ref number */
    for(int i=1; i<= iTestNumber; i++){
        if((iTestNumber % i) == 0){
            iCountDiv++;
        }else if(iCountDiv >3){
            break;
        }
    }

    /* display the result of the operation*/
    if(iCountDiv == 2){
        printf("This number is the first number \n");
        return true;
    }else{
        printf("This number is not the first number \n");
        return false;
    }
}


/**
 * @brief caculate the factorial of the word
 *
 * @param iTestnumber the number that we to obtains factorial
 * @return  factorial of the input number
 */
unsigned int iFatorialInt(unsigned int iTestnumber){
    /* this value store the result of operation */
    unsigned int iFacResult = 1;

    /* loop for all the before the ref value */
    for(int data=iTestnumber; data>0; data--){
        iFacResult = iFacResult * data;
    }

    /* Display result */
    printf("The factorial of input number is: %d \n", iFacResult);
    return iFacResult;
}


/**
 * @brief calculate the power of number
 *
 * @param fNumber   is the number that we want to obtains power
 * @param iLevelPow   is the power number of the operation
 */
float vPowerNumber( float fNumber, int iLevelPow){
    /* this value store the result of operation */
    float fPowResult = 1;
    bool bStateOpr = true;

    /* check the state of power */
    if(iLevelPow < 0){
        bStateOpr = false;
        iLevelPow = iLevelPow * -1;
    }else if (iLevelPow == 0){
        return (float)1;
    }

    /* loop and  mutiple the input data with him */
    for(int i=0; i<iLevelPow; i++){
        if(bStateOpr){
            fPowResult = fPowResult * fNumber;
        }else{
            fPowResult = 1 / (fPowResult * fNumber);
        }
    }

    /* reset the power */
    if(bStateOpr == false){
        iLevelPow = iLevelPow * -1;
    }

    /* Display the result */
    printf("The result of %f ^ %d is: %f \n", fNumber,iLevelPow,fPowResult);
    return fPowResult;
}


/**
 * @brief check if  the number is power of two
 *
 * @param iNumber the number that you want check
 * @return true   if is power of two
 * @return false  if is no power of two
 */
bool bIsPowerOfTwo(int iNumber){
    /* Do the modulo of that number and check if equal to zero */
    if((iNumber % 2) == 0){
        printf("This number is a power of two \n");
        return true;
    }else{
        printf(" This number is not a power of two \n");
        return false;
    }
}


/**
 * @brief check if the number is pecfect
 *
 * @param iNumber the integer that you want to check
 * @return true  if is a is pecfect number
 * @return false if is not a pecfect number
 */
bool bNumberIsPerfect(unsigned int  iNumber){
    /* init the counter of division without rest */
    unsigned int iCountDiv = 0;

    /* Do the loop for take all the divisor of input number*/
    for(unsigned int i=2; i<= iNumber; i++){
        if((iNumber % i) == 0){
            iCountDiv += (iNumber/i);
        }
    }

    /* Display the result */
    if(iNumber == iCountDiv){
        printf("This number is the pecfect number \n");
        return true;
    }else{
        printf("This number is not the pecfect number \n");
        return false;
    }

}


/**
 * @brief do the convertion the decimal number and binary number
 *
 * @param iNumber the integer that you want to convert
 * @return true if the convertion go well
 * @return false if the convertion fail
 */
bool bConvDecToBinary(unsigned int iNumber){
    int size = (int) ((log(iNumber)/ log(2)) +1);
    bool *bResult = malloc(sizeof(bool[size+1]));
    unsigned int iCount = 0;

    /* loop and do the division of two */
    while (iNumber > 0){
        if((iNumber %2) == 0){
            *(bResult + iCount) = 0;
        }else{
            *(bResult + iCount) = 1;
        }
        iNumber /= 2;
        iCount++;
    }
    /* remove the oveerflow element */
    iCount--;

    /* display the result of the convertion */
    printf("The convertion of %d is: ", iNumber);
    for(unsigned int i=0; i<=iCount; i++){
        printf("%d", *(bResult +(iCount-i)));
    }
}
