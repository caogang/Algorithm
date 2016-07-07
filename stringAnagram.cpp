/*
 * stringAnagram.cpp
 *
 *  Created on: 2016年7月7日
 *      Author: MarvinCao
 */
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <string>
#include "stringMarvinCao.h"

using namespace std;

map<string, string> dic;

/**
 * Description: read data from the dictionary
 * Input:
 *      dicFile: dictionary fileName
 * Return:
 *      0:    success.
 *     -1:    fail.
 */
int readDic(const char* dicFile)
{
    ifstream in(dicFile);

    if (!in)
    {
        cout << "Open File error." << endl;
        return -1;
    }

    string word;
    string sign;

    /*read the data*/
    while (in >> word)
    {
        sign = word;
        sort(sign.begin(), sign.end());

        /*store the signature-word pair into dictionary*/
        dic[sign] += word + " ";
    }

    in.close();
    return 0;
}

/**
 * Only used for debugging
 */
void printDic()
{
    map<string, string>::iterator iter = dic.begin();
    map<string, string>::iterator end = dic.end();
    cout << "print dictionary:" << endl;
    while(iter != end)
    {
        cout << iter->first + "->"<< iter->second << endl;
        ++iter;
    }
}

int findAnagramString(const char* dicFile, const char* str, int n1)
{
    if (str == NULL || readDic(dicFile) != 0)
    {
        return -1;
    }

    // printDic();
    /*use STL map.find(string) to find anagram string of str*/
    string strSource(str);
    sort(strSource.begin(), strSource.end());
    map<string, string>::iterator iterTarget = dic.find(strSource);
    if (iterTarget == dic.end())
    {
        cout << "No " << str <<"'s anagram string" << endl;
        return 1;
    }

    /*print the anagram string of str*/
    cout << "The anagram strings of " << str << ":" << iterTarget->second << endl;
    return 0;

}


