//
// Created by elf on 18.09.17.
//

#include "library.h"


int mystrlen(const char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char* mystrcpy(char* str1, const char* str2, int LEN)
{
    int i = 0;
    int lens = mystrlen(str2);
    for (i; i <= lens && i < LEN; i++)
    {
        str1[i] = str2[i];
    }
    return str1;
}

char* mystrcat(char* str1, const char* str2, int LEN)
{
    int i = 0;
    for (i; i < LEN; i++)
    {
        if (str1[i] == '\0')
        {
            break;
        }
    }
    for (int a = 0; a < LEN && a <= mystrlen(str2); a++)
    {
        str1[i + a] = str2[a];
    }
    return str1;
}