//  strand04.c                  //  KBR.2022
//  pseudo random string generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) 
{   
    //  seed Pseudo-Random engine w/ current time.
    srand((unsigned int)(time(NULL)));

    //  set integer index to 0
    int index = 0;

    char char1[] =               //  init char array:
    "MN!@#BVCXZ098?'[]|ws^xedc5"    //  UPPER/lower
    "$%76A^*&SDFqazG4HpoKLvfrtg"    //  alphanumeric
    "bnhy*-=_+ujm3lk.,:;><`~i21";   //  +punctuation 

        //  generates string of 2048 bytes from char array
	for(index = 0; index < 2048; index++)
	{
          printf("%c", char1[rand() % (sizeof char1 - 1)]);
	}

        //  print result on stdout <1>
	puts("");

	return 0;    //  exit successfully.
}
