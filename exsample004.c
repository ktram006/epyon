#include <stdio.h>
#include <time.h>

//  time _tm struct example code for tm_wday
//  _wday being trickier to access due to it not
//  being initialized when time_t is called.

int main()
{
    time_t now;
    struct tm *today;
    
    time(&now);
    today = localtime(&now);
  
    int currentday = today->tm_wday;
    
    printf("tm_wday=%d",
            currentday  );
}
