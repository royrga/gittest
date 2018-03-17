#include <stdio.h>
#include <string.h>
#include "Murcielago.h"

static char message [100];

const char* murcielago (char* word){
	strcpy (message, word);
	 
	for (int c=0; c<=100; c++) {
	 
		switch (message[c]) {
		{
		case 'm':
			message[c]='0';
			break;
		}
		{
		case 'u':
			message[c]='1';
			break;
		}
		{
		case 'r':
			message[c]='2';
			break;
		}
		{
		case 'c':
			message[c]='3';
			break;
		}
		{
		case 'i':
			message[c]='4';
			break;
		}
		{
		case 'e':
			message[c]='5';
			break;
		}
		{
		case 'l':
			message[c]='6';
			break;
		}
		{
		case 'a':
			message[c]='7';
			break;
		}
		{
		case 'g':
			message[c]='8';
			break;
		}
		{
		case 'o':
			message[c]='9';
			break;
		}
		default:
			message[c]=message[c];
		}
	}
	return message;
}
