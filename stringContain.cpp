/*
 * stringContain.cpp
 *
 *  Created on: 2016年6月29日
 *      Author: MarvinCao
 */
#include <stdio.h>
#include "stringMarvinCao.h"

/*******************************************************/
int stringContainBrute(const char* str1, int n1, const char* str2, int n2)
{
    int i = 0;
    int j = 0;

    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1 && str1[j] != str2[i]; j++);
        if (j >= n1)
        {
            return 1;
        }
    }

    return 0;
}



