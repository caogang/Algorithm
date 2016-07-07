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

    int i = 0;
    int j = 0;

    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }

    /*do not change the source string*/
    char *str1_cpy = (char *)malloc((n1 + 1) * sizeof(char));
    char *str2_cpy = (char *)malloc((n2 + 1) * sizeof(char));
    memcpy(str1_cpy, str1, n1 + 1);
    memcpy(str2_cpy, str2, n2 + 1);

    /*using the C++ STL sort algorithm O(nlog2(n))*/
    std::sort(str1_cpy, str1_cpy + n1);
    std::sort(str2_cpy, str2_cpy + n2);

    printf("after sort:\n");
    printf("str1 = %s\n", str1_cpy);
    printf("after sort:\n");
    printf("str2 = %s\n", str2_cpy);

    /*O(n1 + n2)*/
    for (i = 0, j = 0; j < n2;)
    {
        while (i < n1 && str1_cpy[i] < str2_cpy[j])
        {
            i++;
        }
        if (i >= n1 || str1_cpy[i] > str2_cpy[j])
        {
            free(str1_cpy);
            free(str2_cpy);
            return 1;
        }
        j++;
    }

    free(str1_cpy);
    free(str2_cpy);
    return 0;
}

/******************************************************/
int stringContainPrimeNumMul(const char* str1, int n1, const char* str2, int n2)
{
    /*correspond to every capital letter*/
    const int primeNum[26] = {2, 3, 5, 7, 11, 13,
                              17, 19, 23, 29, 31,
                              37, 41, 43, 47, 53,
                              59, 61, 67, 71, 73,
                              79, 83, 89, 97, 101};
    int i = 0;
    long long str1Mul = 1;

    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }

    for (i = 0; i < n1; i++)
    {
        int x = primeNum[ str1[i] - 'A' ];

        /*Do not multiply the x if the letter to which the x is correspond has been appeared*/
        /*This can decrease the total result str1Mul*/
        if (str1Mul % x)
        {
            str1Mul *= x;
        }
    }

    printf("the multiply prime number of '%s': %lld \n", str1, str1Mul);

    for (i = 0; i < n2; i++)
    {
        if (str1Mul % primeNum[ str2[i] - 'A' ])
        {
            return 1;
        }
    }

    return 0;

}

/******************************************************/
int stringContainBitOpr(const char* str1, int n1, const char* str2, int n2)
{
    /*use a integer signature commonly consisting of 32 bits or 64 bits for the sake of containing 26 bits*/
    /*to identify every capital letter*/
    int hash = 0;
    int i = 0;

    if (str1 == NULL || str2 == NULL)
    {
        return -1;
    }

    for (i = 0; i < n1; i++)
    {
        hash |= 1 << (str1[i] - 'A');
    }

    printf("the hash signature = %d\n", hash);

    for (i = 0; i < n2; i++)
    {
        /*verify the signature*/
        if ((hash & (1 << (str2[i] - 'A'))) == 0)
        {
            return 1;
        }
    }

    return 0;

}

