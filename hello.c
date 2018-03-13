/*
 * Program to test git 
 * author: jerivas
 * date: 2018/02/26
 */
#include <stdio.h>
#include <stdlib.h>

#include "palindrom.c"
#include "anagrama.h"
#include "Murcielago.c"

int main()
{
	char string[256]={0};
	char a[100], b[100], c[100], d[100],p[100];
	char aux[100];
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

	printf("Provide a word to verify if it is palindrom: \n");
	gets(p);
	flag = is_palindrom(p);
	if (flag == 1)
		printf("%s is palindrom \n", p);
	else
		printf("%s does not palindrom \n", p);
	printf("Provide another word:\n");
	gets(c);
	*aux = murcielago(c);
	strncpy (d, aux,sizeof(d));
        printf("%s", d);
	return 0;
}
   
