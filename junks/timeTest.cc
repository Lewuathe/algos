#include <cstdio>
#include <ctime>
#include <time.h>

using namespace std;

int main(void){
  struct tm *date;
  time_t    now;

  date = localtime(&now);

  int year     = date->tm_year + 1900;
  int mon      = date->tm_mon  + 1;
  int day      = date->tm_mday;
  int hour     = date->tm_hour;
  int minute   = date->tm_min;
  int sec      = date->tm_sec;
  printf("%d-%d-%d", year, mon, day, hour, minute, sec);

  return 0;
  
}
