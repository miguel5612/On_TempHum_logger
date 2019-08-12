#include "onmotica.h"
#include "configuration.h"
#include <time.h>

String SD_PROCESS::getTime()
{
      time_t now = time(nullptr);
      struct tm* p_tm = localtime(&now);
      __fecha = String(p_tm->tm_mday) + "/" +  String(p_tm->tm_mon + 1) + "/" + String(p_tm->tm_year + 1900) + " - " +  String(p_tm->tm_hour) + ":" + String(p_tm->tm_min) + ":" + String(p_tm->tm_sec);
      return __fecha;
}