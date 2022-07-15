#include <stdio.h>
#include <time.h>

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
