#include<stdio.h>
#include<stdlib.h>
#include "library.h"





int main()
{
    int LEN = 100;
    const char* str = "abcd efrt uihb poujh";
    char str1[LEN];
    const char* str2 = "abcd eftg atsd 1234 0987";
//	puts(str2);
//	mystrlen(str);
    printf("%d\n", mystrlen(str));
    printf("%d\n", mystrcpy(str1, str2, LEN));
    puts(str1);
    printf("%s\n", mystrcat(str1, "DCBD", LEN));
//  system("Pause");
    return 0;
}