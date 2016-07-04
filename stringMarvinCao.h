/*
 * stringMarvinCao.h
 *
 *  Created on: 2016年6月27日
 *      Author: MarvinCao
 */

#ifndef STRINGMARVINCAO_H_
#define STRINGMARVINCAO_H_

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

/**
 * Description: whether every char of the short string is included in the long string using brute-force algorithm.
 * Input:
 *      str1: the long string only containing capital letter
 *      n1:   the length of the str1
 *      str2: the short string only containing capital letter
 *      n2:   the length of the str2
 * Return:
 *      -1:   parameters error.
 *      0:    true.
 *      1:    false.
 */
int stringContainBrute(const char* str1, int n1, const char* str2, int n2);

/**
 * Description: whether every char of the short string is included in the long string using pre-sorted algorithm.
 * Input:
 *      str1: the long string only containing capital letter
 *      n1:   the length of the str1
 *      str2: the short string only containing capital letter
 *      n2:   the length of the str2
 * Return:
 *      -1:   parameters error.
 *      0:    true.
 *      1:    false.
 */
int stringContainSort(const char* str1, int n1, const char* str2, int n2);

/**
 * Description: whether every char of the short string is included in the long string using pre-sorted algorithm.
 * Input:
 *      str1: the long string only containing capital letter
 *      n1:   the length of the str1
 *      str2: the short string only containing capital letter
 *      n2:   the length of the str2
 * Return:
 *      -1:   parameters error.
 *      0:    true.
 *      1:    false.
 */
int stringContainPrimeNumMul(const char* str1, int n1, const char* str2, int n2);

#endif /* STRINGMARVINCAO_H_ */
