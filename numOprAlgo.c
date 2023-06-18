#include "arrayAlgo.h"
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
    printf("The factorial of input number id %d \n", iFacResult);
    return iFacResult;
}
