
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) 
{
	srand((unsigned int)(time(NULL)));
	int index = 0;

	char char1[] =
     "MN!@#BVCXZ098?'[]|qazws^xedc"
	 "$%765A^*&SDFG4HJKLvfrtg"
     "bnhy*-=_+ujm3lkpo.,:;><`~i21";

	for(index = 0; index < 2048; index++)
	{
		printf("%c", char1[rand() % (sizeof char1 - 1)]);
	}
	puts("");
	return 0;
}
