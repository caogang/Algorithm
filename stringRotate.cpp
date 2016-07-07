/*
 * stringRotate.cpp
 *
 *  Created on: 2016年6月27日
 *      Author: MarvinCao
 */
#include <stdio.h>
#include "stringMarvinCao.h"

/*********************************************/
int stringRotateBrute(char* str, int n, int m)
{
    int i = 0;
    char tp = ' ';

    if (n <= 0 || m > n) {
        return -1;
    }

    printf("before rotate:\n");
    printf("\t str=%s\n", str);

    while (m--)
    {
        tp = str[0];
        for (i = 0; i < n - 1; i++)
        {
            str[i] = str[i + 1];
        }
        str[n - 1] = tp;
    }

    printf("after rotate:\n");
    printf("\t str=%s\n", str);

    return 0;

}
/*********************************************/

/*********************************************/
void revertString(char* str, int from, int to)
{
    char tpStr = ' ';

    while(from < to)
    {
        tpStr = str[from];
        str[from++] = str[to];
        str[to--] = tpStr;
    }
}

int stringRotateThreeStepRevert(char *str, int n, int m)
{
    if (n <= 0 || m > n) {
        return -1;
    }

    printf("before rotate:\n");
    printf("\t str=%s\n", str);

    revertString(str, 0, m - 1);

    printf("rotate step1:\n");
    printf("\t str=%s\n", str);

    revertString(str, m, n - 1);

    printf("rotate step2:\n");
    printf("\t str=%s\n", str);

    revertString(str, 0, n - 1);

    printf("rotate step3:\n");
    printf("\t str=%s\n", str);

    return 0;
}
/*********************************************/

/*********************************************/
int stringRotateThreeStepRevertUsingSpaceDelimiter(char* str, int n)
{
    int i = 0;
    int from = 0;
    int to = n - 1;

    if (n <= 0) {
        return -1;
    }

    printf("before rotate:\n");
    printf("\t str=%s\n", str);

    for (i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            if (from == i)
            {
                /*deal with the space located in the end of string and multiple space between words*/
                from = i + 1;
            }
            else
            {
                to = i - 1;
                revertString(str, from, to);
                from = i + 1;

                printf("rotate:\n");
                printf("\t str=%s\n", str);
            }
        }
    }

    /*handle the end string which may haven't been rotated*/
    if (from < n)
    {
        to = n - 1;
        revertString(str, from, to);
        printf("rotate:\n");
        printf("\t str=%s\n", str);
    }

    /*the last revert*/
    revertString(str, 0, n - 1);

    printf("after rotate:\n");
    printf("\t str=%s\n", str);

    return 0;
}
/*********************************************/
