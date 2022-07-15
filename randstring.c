 //  THANKS FOR THE HELP EssGeEich!  //

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define LEN 32;

static const char alphanum[] =
  "0123456789"
  "!@#$%^&*-=?:;.,[]~|()_+'/{}`<>"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom(void)
{
    return alphanum[rand() % stringLength];
}

int main()
{
	void *memchr(const void *str, int c, size_t);
    srand(time(0));
    char Str[LEN];
for(int i = 0; i <LEN; i++){Str[i]=genRandom()};
  
    printf("%s", Str);
    
}
