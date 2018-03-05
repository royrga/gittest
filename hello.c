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
	printf("Provide a word\n");
	gets(a);
	printf("Provide a second word\n");
	gets(b);
	flag = check_anagram(a, b);
	if (flag == 1)
		printf("%s and %s are anagrams\n", a, b);
	else
		printf("%s and %s are not anagrams.\n", a, b);

	return 0;
}
   
