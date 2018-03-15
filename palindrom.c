
#include<stdlib.h>

#include "palindrom.h"


int is_palindrom(char* w)
{
    int a,c,i;
    a = c = strlen(w);   
    for (i=0;i<a;i++,c--){
        if (w[i] != w[c-1]){
            //printf("La palabra '%s' no es palindromon", palabra);
            return 0;
        }
   }
   
   return 1;



}


