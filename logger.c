#include "logger.h"

extern logLevel_t logLevel; 

/**
 * @brief  Debug Level Name 
 * @param  [in] selectLogLevel 
 * @return [const char*] Debug Level String 
 */
static const char *debugLevelGetString(logLevel_t selectLogLevel);


/**
 * @brief  Debug Level Name 
 * @param  [in] selectLogLevel 
 * @return [const char*] Debug Level String 
 */
static const char *debugLevelGetString(logLevel_t selectLogLevel)
{
	if(selectLogLevel <= ERROR)
		return "ERROR";
	else if(selectLogLevel <= WARNING)
		return "WARN";
	else if(selectLogLevel <= INFO)
		return "INFO";
    return "DEBUG";
}

void logger(logLevel_t selectLogLevel, const char *format,...) 
{
    va_list va;
	va_start(va,format);

    time_t TIME = time(NULL);
    struct tm time = *localtime(&TIME);

    if ( selectLogLevel <= logLevel )
    {
        fprintf(stdout,"[%s]: %02d/%02d/%04d %02d:%02d:%02d "
                    , debugLevelGetString(selectLogLevel)
                        , time.tm_mday, time.tm_mon + 1, time.tm_year + 1900
                                , time.tm_hour, time.tm_min, time.tm_sec);

        vfprintf(stdout,format,va);
        va_end(va);
        fprintf(stdout,"\n");
    }
}
void flogger(logLevel_t selectLogLevel, const char *format,...) 
{
    va_list va;
	va_start(va,format);

    time_t TIME = time(NULL);
    struct tm time = *localtime(&TIME);

    if ( selectLogLevel <= logLevel )
    {
        FILE* file = fopen("log.txt", "a");
        fprintf(file,"[%s]: %02d/%02d/%04d %02d:%02d:%02d "
                    , debugLevelGetString(selectLogLevel)
                        , time.tm_mday, time.tm_mon + 1, time.tm_year + 1900
                                , time.tm_hour, time.tm_min, time.tm_sec);

        vfprintf(file,format,va);
        va_end(va);
        fprintf(file,"\n");
        fclose(file);
    }
 
}
