/*
 * stringMarvinCao.h
 *
 *  Created on: 2016年6月27日
 *      Author: MarvinCao
 */

#ifndef STRINGMARVINCAO_H_
#define STRINGMARVINCAO_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: Rotate the string using brute-force algorithm.
 * Input:
 *      str: string to be rotated
 *      n:   the length of the str
 *      m:   the first m characters would be rotate to the end of str
 * Output:
 *      str: string which has been rotated
 * Return:
 *      -1:  rotate error.
 *      0:   rotate success.
 */
int stringRotateBrute(char* str, int n, int m);


/**
 * Description: Rotate the string using three-step-revert algorithm.
 * Input:
 *      str: string to be rotated
 *      n:   the length of the str
 *      m:   the first m characters would be rotate to the end of str
 * Output:
 *      str: string which has been rotated
 * Return:
 *      -1:  rotate error.
 *      0:   rotate success.
 */
int stringRotateThreeStepRevert(char* str, int n, int m);

/**
 * Description: Rotate the string using three-step-revert algorithm.
 * Input:
 *      str: string to be rotated using space delimiter
 *      n:   the length of the str
 * Output:
 *      str: string which has been rotated
 * Return:
 *      -1:  rotate error.
 *      0:   rotate success.
 */
int stringRotateThreeStepRevertUsingSpaceDelimiter(char* str, int n);

#endif /* STRINGMARVINCAO_H_ */
