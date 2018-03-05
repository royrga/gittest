/*
 * Program to test git 
 * author: jerivas
 * date: 2018/02/26
 */
#include <stdio.h>
#include <stdlib.h>

#include "palindrom.h"
#include "anagrama.h"

int main()
{
	char string[256]={0};
	char a[100], b[100];
	int flag;

	printf("Please, introduce a string\n");
	gets(string);

	printf("Your string is:\n%s\n", string);
	printf("Introduce una palabra\n");
	gets(a);
	printf("Introduce otra palabra\n");
	gets(b);
	flag = check_anagram(a, b);
	if (flag == 1)
		printf("%s y %s son anagramas\n", a, b);
	else
		printf("%s y %s no son anagramas.\n", a, b);

	return 0;
}
   
