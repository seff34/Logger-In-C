#include "logger.h"

static logLevel_t LOG_LEVEL = DEBUG;

/**
 * @brief  Debug Level Name
 * @param  [in] selectLogLevel
 * @return [const char*] Debug Level String
 */
static const char *debugLevelGetString(logLevel_t selectLogLevel)
{
    if (selectLogLevel <= ASSERT)
        return "ASSRT";
    else if (selectLogLevel <= ERROR)
        return "ERROR";
    else if (selectLogLevel <= WARNING)
        return "WARN";
    else if (selectLogLevel <= INFO)
        return "INFO";
    return "DEBUG";
}

void setLogLevel(logLevel_t logLevel)
{
	LOG_LEVEL = logLevel;
}

int debug_printf(logLevel_t logLevel,const char* function, const char* file, const int line, const char *format,...)
{
#ifdef DEBUGGER
	if ( logLevel <= LOG_LEVEL )
	{
		fprintf(stdout,"[%s]%s %s(%d) ",debugLevelGetString(logLevel),file,function,line);

		va_list va;
		va_start(va,format);
		va_end(va);
		vfprintf(stdout,format,va);
	}
#else
    (void)function;
    (void)file;
    (void)line;
    (void)format;
#endif
	return 0;
}
