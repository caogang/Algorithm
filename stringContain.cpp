/*
 * stringContain.cpp
 *
 *  Created on: 2016年6月29日
 *      Author: MarvinCao
 */
#include <stdio.h>
#include <algorithm>
#include <memory.h>
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

/******************************************************/
int stringContainSort(const char* str1, int n1, const char* str2, int n2)
{

    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }

    /*do not change the source string*/
    char *str1_cpy = (char *)malloc((n1 + 1) * sizeof(char));
    char *str2_cpy = (char *)malloc((n2 + 1) * sizeof(char));
    memcpy(str1_cpy, str1, n1 + 1);
    memcpy(str2_cpy, str2, n2 + 1);
    char *p = str1_cpy;
    char *q = str2_cpy;

    /*using the C++ STL sort algorithm O(nlog2(n))*/
    std::sort(str1_cpy, str1_cpy + n1);
    std::sort(str2_cpy, str2_cpy + n2);

    printf("after sort:\n");
    printf("str1 = %s\n", p);
    printf("after sort:\n");
    printf("str2 = %s\n", q);

    /*O(n1 + n2)*/
    while (*q != '\0' && *p != '\0')
    {
        if (*q > *p)
        {
            p++;
            continue;
        }
        if (*q == *p)
        {
            q++;
            continue;
        }
        if (*q < *p)
        {
            free(str1_cpy);
            free(str2_cpy);
            return 1;
        }
    }

    /*return error if the str1 is too short to include enough characters of the str2*/
    if(*q != '\0')
    {
        free(str1_cpy);
        free(str2_cpy);
        return 1;
    }

    free(str1_cpy);
    free(str2_cpy);
    return 0;
}



