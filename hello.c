/*
 * Program to test git 
 * author: jerivas
 * date: 2018/02/26
 */
#include <stdio.h>
#include <stdlib.h>
#include "palindrom.h"


int main()
{
    char string[256]={0};

    printf("Please, introduce a string\n");
    gets(string);

    printf("Your string is:\n%s\n", string);

    return 0;
}

