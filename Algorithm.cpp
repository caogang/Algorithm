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

    printf("1.3 test stringRotateThreeStepRevertUsingSpaceDelimiter\n");
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
    char str211[] = "MarvinCao";
    char str212[] = "Cao";
    if (stringContainBrute(str211, strlen(str211), str212, strlen(str212)) == 0)
    {
        printf("pass test.\n");
    }
    else
    {
        printf("error test.\n");
    }
    printf("\n");

    printf("2 end a test for stringContain.cpp\n");

	return 0;
}
