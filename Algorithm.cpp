//============================================================================
// Name        : Algorithm.cpp
// Author      : MarvinCAO
// Version     :
// Copyright   : 
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include "stringMarvinCao.h"
#include <string.h>

int main(void) {

    printf("#########################################\n");
	printf("1 start a test for stringRotate.cpp\n");
    printf("\n");

	printf("1.1 test stringRotateBrute\n");
    char strBrute[10] = "MarvinCao";
	if (stringRotateBrute(strBrute, 9, 6) == 0)
	{
	    printf("pass test.\n");
	}
	else
	{
	    printf("error test.\n");
	}
	printf("\n");

    printf("1.2 test stringRotateThreeStepRevert\n");
    char strThreeStepRevert[10] = "MarvinCao";
    if (stringRotateThreeStepRevert(strThreeStepRevert, 9, 6) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("1.* test stringRotateThreeStepRevertUsingSpaceDelimiter\n");
    char strUsingSpaceDelimiter[] = "I am a student.";
    if (stringRotateThreeStepRevertUsingSpaceDelimiter(strUsingSpaceDelimiter, strlen(strUsingSpaceDelimiter)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

	printf("1 end a test for stringRotate.cpp\n");

	printf("#########################################\n");
    printf("2 start a test for stringContain.cpp\n");
    printf("\n");

    printf("2.1 test stringContainBrute\n");
    char str211[] = "MARVINCAO";
    char str212[] = "CAO";
    if (stringContainBrute(str211, strlen(str211), str212, strlen(str212)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("2.2 test stringContainSort\n");
    char str221[] = "MARVINCAO";
    char str222[] = "NARRRRRRRRMMM";
    if (stringContainSort(str221, strlen(str221), str222, strlen(str222)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("2.3 test stringContainPrimeNumMul\n");
    char str231[] = "MARVINCAO";
    char str232[] = "NARRRRROOOIIMMM";
    if (stringContainPrimeNumMul(str231, strlen(str231), str232, strlen(str232)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("2.4 test stringContainBitOpr\n");
    char str241[] = "MARVINCAO";
    char str242[] = "NAAHHIMMM";
    if (stringContainBitOpr(str241, strlen(str241), str242, strlen(str242)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("2 end a test for stringContain.cpp\n");

    printf("#########################################\n");
    printf("3 start a test for stringAnagram.cpp\n");
    printf("\n");

    printf("3.* test findAnagramString\n");
    char dic3[] = "dicAnagram.txt";
    char str3[] = "noavaMCir";
    if (findAnagramString(dic3, str3, strlen(str3)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("3 end a test for stringContain.cpp\n");

	return 0;
}
